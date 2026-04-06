#include "database.h"

dataBase::dataBase() {}

bool dataBase::connect() {
    db = QSqlDatabase::addDatabase("QPSQL", "myConnection");
    db.setHostName("localhost");
    db.setUserName("postgres");
    db.setPassword("1234");
    db.setDatabaseName("postgres");

    if (!db.open()) {
        qDebug() << "Nie mozna polaczyc sie z serwerem PostgreSQL";
        return false;
    }

    QSqlQuery query(db);
    query.exec("SELECT 1 FROM pg_database WHERE datname = 'filmy_db'");
    if (!query.next()) {
        if (!query.exec("CREATE DATABASE filmy_db")) {
            qDebug() << "Blad tworzenia bazy danych:" << query.lastError().text();
        } else {
            qDebug() << "Baza danych 'filmy_db' zostala utworzona.";
        }
    }

    db.close();
    db.setDatabaseName("filmy_db");

    if (!db.open()) {
        qDebug() << "Blad otwierania bazy filmy_db:" << db.lastError().text();
        return false;
    }

    qDebug() << "Polaczono z PostgreSQL (filmy_db)!";
    return true;
}



bool dataBase::initDbFromSqlFile(const QString &filePath) {
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Nie mozna otworzyc pliku SQL:" << filePath;
        return false;
    }

    QTextStream in(&file);
    QString sqlScript = in.readAll();
    file.close();

    QStringList queries = sqlScript.split(';', Qt::SkipEmptyParts);
    QSqlQuery query(db);

    for (const QString &queryString : std::as_const(queries)) {
        QString trimmedQuery = queryString.trimmed();
        if (trimmedQuery.isEmpty()) continue;

        if (!query.exec(trimmedQuery)) {
            qDebug() << "Blad wykonania instrukcji z pliku:" << query.lastError().text();
            return false;
        }
    }

    qDebug() << "Schemat z pliku .sql zostal zaladowany pomyslnie.";
    return true;
}