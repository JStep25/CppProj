#include "statscreen.h"
#include "ui_statscreen.h"

statScreen::statScreen(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::statScreen)
{
    ui->setupUi(this);
}

statScreen::~statScreen()
{
    delete ui;
}

void statScreen::on_showButton_clicked()
{
    double min,max,median;
    min = DatabaseUtils::getMinScore();
    max = DatabaseUtils::getMaxScore();
    median = DatabaseUtils::getMedianScore();
    auto global = DatabaseUtils::getGlobalStats();
    ui->median->setText(QString::number(median, 'f', 2));
    ui->max->setText(QString::number(max, 'f', 2));
    ui->min->setText(QString::number(min, 'f', 2));
    ui->avrScore->setText(QString::number(global.first, 'f', 2));
    ui->avrLength->setText(QString::number(global.second, 'f', 1) + " min");

    QString selectedGenre = ui->genreBox->currentText();
    MovieStats gStats = DatabaseUtils::getGenreStats(selectedGenre);
    ui->avrScoreGenre->setText(QString::number(gStats.average, 'f', 2));
    ui->genreMovieNumber->setText(QString::number(gStats.count));
    ui->minGenre->setText(QString::number(gStats.min));
    ui->maxGenre->setText(QString::number(gStats.max));

    QString selectedDirector = ui->directorBox->currentText();
    MovieStats dStats = DatabaseUtils::getDirectorStats(selectedDirector);
    ui->avrScoreDirect->setText(QString::number(dStats.average, 'f', 2));
    ui->directMovieNumber->setText(QString::number(dStats.count));
    ui->minDirect->setText(QString::number(dStats.min));
    ui->maxDirect->setText(QString::number(dStats.max));

}
void statScreen::refreshComboBoxes() {
    QSqlQuery query("SELECT name FROM directors ORDER BY name", QSqlDatabase::database("myConnection"));
    ui->directorBox->clear();
    while(query.next()) ui->directorBox->addItem(query.value(0).toString());
}

