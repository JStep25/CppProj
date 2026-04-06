#include "searchscreen.h"
#include "ui_searchscreen.h"

searchScreen::searchScreen(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::searchScreen)
{
    ui->setupUi(this);
}

searchScreen::~searchScreen()
{
    delete ui;
}

void searchScreen::on_searchButton_clicked()
{
    QString text = ui->searchEdit->text().trimmed();
    emit searchRequested(text);
    ui->searchEdit->clear();
}


void searchScreen::on_resetButton_clicked()
{
    ui->searchEdit->clear();
    emit searchRequested("");
}

