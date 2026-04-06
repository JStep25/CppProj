#include "deletescreen.h"
#include "ui_deletescreen.h"

deleteScreen::deleteScreen(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::deleteScreen)
{
    ui->setupUi(this);
}

deleteScreen::~deleteScreen()
{
    delete ui;
}

void deleteScreen::on_deleteButton_clicked()
{
    QString idStr = ui->idEdit->text().trimmed();

    if (idStr.isEmpty()) {
        qDebug() << "Pole ID jest puste";
        ui->errorMsg->setText("Pole ID jest puste");
        ui->errorMsg->setStyleSheet("font-size: 18px; color: red; font-weight: bold;");
        return;
    }

    bool ok;
    int id = idStr.toInt(&ok);
    if (!ok) {
        qDebug() << "Niepoprawne ID wprowadz liczbe";
        ui->errorMsg->setText("Niepoprawne ID wprowadz liczbe");
        ui->errorMsg->setStyleSheet("font-size: 18px; color: red; font-weight: bold;");
        return;
    }

    QSqlQuery query(QSqlDatabase::database("myConnection"));
    query.prepare("DELETE FROM movies WHERE id = ?");
    query.addBindValue(id);

    if (!query.exec()) {
        qDebug() << "Błąd podczas usuwania:" << query.lastError().text();
    } else if (query.numRowsAffected() == 0) {
        qDebug() << "Nie znaleziono rekordu o ID =" << id;
        ui->errorMsg->setText(QString("Nie znaleziono rekordu o ID = %1").arg(id));
        ui->errorMsg->setStyleSheet("font-size: 18px; color: red; font-weight: bold;");
    } else {
        qDebug() << "Rekord usuniety ID =" << id;
        DatabaseUtils::cleanupDirectors();
        ui->idEdit->clear();
        ui->errorMsg->clear();
        emit movieDeleted();
    }
}

