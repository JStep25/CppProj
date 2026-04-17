#include "addscreen.h"
#include "ui_addscreen.h"

addScreen::addScreen(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::addScreen)
{
    ui->setupUi(this);
}

addScreen::~addScreen()
{
    delete ui;
}

void addScreen::on_addMovieButton_clicked()
{
    QString title, ocenaStr, rok, czasTrwania, director, gatunek;
    bool ok;
    title = ui->titleEdit->text().trimmed();
    ocenaStr = ui->scoreBox->text().trimmed();
    rok =  ui->yearBox->text().trimmed();
    czasTrwania =  ui->lengthBox->text().trimmed();
    director =  ui->directorEdit->text().trimmed();
    gatunek = ui->genreBox->currentText().trimmed();
    double ocena = ocenaStr.replace(",", ".").toDouble(&ok);

    if (!ok) {
        ui->errorMsg->setText("Nieprawidlowa ocena");
        ui->errorMsg->setStyleSheet("font-size: 18px; color: red; font-weight: bold;");
        return;
    }

    if (title.isEmpty() || rok == "0" || czasTrwania == "0" || director.isEmpty()) {
        qDebug() << "Wypelnij wszystkie pola";
        ui->errorMsg->setText("Wypelnij wszystkie pola");
        ui->errorMsg->setStyleSheet("font-size: 18px; color: red; font-weight: bold;");
        return;
    }
    int dirId = DatabaseUtils::getOrCreateId("directors", director);
    int genId = DatabaseUtils::getOrCreateId("genres", gatunek);

    if (dirId == -1 || genId == -1) {
        qDebug() << "Blad podczas uzyskiwania ID";
        return;
    }
    QSqlQuery query(QSqlDatabase::database("myConnection"));

    query.prepare("INSERT INTO movies (title, score, production_year, duration, director_id, genre_id) VALUES (?, ?, ?, ? , ? , ?)");
    query.addBindValue(title);
    query.addBindValue(ocena);
    query.addBindValue(rok.toInt());
    query.addBindValue(czasTrwania.toInt());
    query.addBindValue(dirId);
    query.addBindValue(genId);

    if (!query.exec()) {
        qDebug() << "Blad dodawania:" << query.lastError().text();
    } else {
        qDebug() << "Dodano rekord";
        ui->errorMsg->clear();
        ui->titleEdit->clear();
        ui->scoreBox->clear();
        ui->yearBox->clear();
        ui->lengthBox->clear();
        ui->directorEdit->clear();
        ui->scoreBox->setValue(0.0);
        ui->yearBox->setValue(0);
        ui->lengthBox->setValue(0);
        emit movieAdded();
    }
}

