#include "filterscreen.h"
#include "ui_filterscreen.h"

filterScreen::filterScreen(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::filterScreen)
{
    ui->setupUi(this);
}

filterScreen::~filterScreen()
{
    delete ui;
}

void filterScreen::refreshComboBoxes() {

    QSqlQuery dirQuery("SELECT name FROM directors ORDER BY name", QSqlDatabase::database("myConnection"));
    ui->directorBox->clear();
    ui->directorBox->addItem("Wszyscy rezyserzy");
    while(dirQuery.next()) {
        ui->directorBox->addItem(dirQuery.value(0).toString());
    }

}

void filterScreen::on_resetButton_clicked()
{
    ui->genreBox->setCurrentIndex(0);
    ui->directorBox->setCurrentIndex(0);
    emit filterRequested("Wszystkie gatunki", "Wszyscy rezyserzy");
}


void filterScreen::on_filtrButton_clicked()
{
    QString selectedGenre = ui->genreBox->currentText();
    QString selectedDirector = ui->directorBox->currentText();
    emit filterRequested(selectedGenre, selectedDirector);
}

