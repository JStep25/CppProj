#ifndef ADDSCREEN_H
#define ADDSCREEN_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include "databaseutils.h"
namespace Ui {
class addScreen;
}

class addScreen : public QWidget
{
    Q_OBJECT

public:
    explicit addScreen(QWidget *parent = nullptr);
    ~addScreen();

private slots:
    void on_addMovieButton_clicked();

private:
    Ui::addScreen *ui;
signals:
    void movieAdded();
};

#endif // ADDSCREEN_H
