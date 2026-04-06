#include "sortscreen.h"
#include "ui_sortscreen.h"

sortScreen::sortScreen(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::sortScreen)
{
    ui->setupUi(this);
}

sortScreen::~sortScreen()
{
    delete ui;
}

void sortScreen::on_sortButton_clicked()
{
    QString kryterium = ui->kryteriumBox->currentText();
    QString sposob = ui->sortBox->currentText();


    QString column;
    if (kryterium == "id") column = "id";
    else if (kryterium == "tytuł") column = "title";
    else if (kryterium == "ocena") column = "score";
    else if (kryterium == "rok produkcji") column = "production_year";
    else if (kryterium == "czas trwania") column = "duration";
    else if (kryterium == "reżyser") column = "director_id";
    else if (kryterium == "gatunek") column = "genre_id";


    Qt::SortOrder order = (sposob == "rosnąco") ? Qt::AscendingOrder : Qt::DescendingOrder;

    emit sortRequested(column, order);
}


void sortScreen::on_resetButton_clicked()
{
    ui->kryteriumBox->setCurrentIndex(0);
    ui->sortBox->setCurrentIndex(0);

    emit sortRequested("id", Qt::AscendingOrder);
}

