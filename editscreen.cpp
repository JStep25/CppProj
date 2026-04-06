#include "editscreen.h"
#include "ui_editscreen.h"

editScreen::editScreen(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::editScreen)
{
    ui->setupUi(this);
}

editScreen::~editScreen()
{
    delete ui;
}

void editScreen::on_editButton_clicked()
{
    QString title, ocena, rok, czasTrwania, director, gatunek, idStr;
    title = ui->titleEdit->text().trimmed();
    ocena = ui->scoreBox->text().trimmed();
    rok =  ui->yearBox->text().trimmed();
    czasTrwania =  ui->lengthBox->text().trimmed();
    director =  ui->directorEdit->text().trimmed();
    gatunek = ui->genreBox->currentText().trimmed();
    idStr = ui->idBox->text().trimmed();
    if (title.isEmpty() || rok == "0" || czasTrwania == "0" || director.isEmpty()) {
        qDebug() << "Wypelnij wszystkie pola";
        ui->errorMsg->setText("Wypelnij wszystkie pola");
        ui->errorMsg->setStyleSheet("font-size: 18px; color: red; font-weight: bold;");
        return;
    }
    if (idStr.isEmpty()) {
        qDebug() << "Pole ID jest puste";
        ui->errorMsg->setText("Pole ID jest puste");
        ui->errorMsg->setStyleSheet("font-size: 18px; color: red; font-weight: bold;");
        return;
    }

    bool ok;
    int id = idStr.toInt(&ok);
    if (!ok) {
        qDebug() << "Niepoprawne ID wprowadz liczbe.";
        ui->errorMsg->setText("Niepoprawne ID wprowadz liczbe");
        ui->errorMsg->setStyleSheet("font-size: 18px; color: red; font-weight: bold;");
        return;
    }


    int dirId = DatabaseUtils::getOrCreateId("directors", director);
    int genId = DatabaseUtils::getOrCreateId("genres", gatunek);

    if (dirId == -1 || genId == -1) {
        qDebug() << "Blad podczas uzyskiwania ID relacji";
        return;
    }
    QSqlQuery query(QSqlDatabase::database("myConnection"));

    query.prepare("UPDATE movies SET title = ?, score = ?, production_year = ?, duration = ?, director_id = ?, genre_id = ? WHERE id = ?");
    query.addBindValue(title);
    query.addBindValue(ocena);
    query.addBindValue(rok);
    query.addBindValue(czasTrwania);
    query.addBindValue(dirId);
    query.addBindValue(genId);
    query.addBindValue(id);

    if (!query.exec()) {
        qDebug() << "Blad edycji:" << query.lastError().text();
    } else {
        if (query.numRowsAffected() == 0) {
            qDebug() << "Nie znaleziono filmu o podanym ID:" << id;
            ui->errorMsg->setText(QString("Nie znaleziono rekordu o ID = %1").arg(id));
            ui->errorMsg->setStyleSheet("font-size: 18px; color: red; font-weight: bold;");
            return;
        }
        qDebug() << "Zaktualizowano rekord o ID:" << id;
        ui->errorMsg->clear();
        ui->titleEdit->clear();
        ui->scoreBox->clear();
        ui->yearBox->clear();
        ui->lengthBox->clear();
        ui->directorEdit->clear();
        ui->idBox->clear();

        emit movieEdited();
    }
}

