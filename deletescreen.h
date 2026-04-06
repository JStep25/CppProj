#ifndef DELETESCREEN_H
#define DELETESCREEN_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include "databaseutils.h"
namespace Ui {
class deleteScreen;
}

class deleteScreen : public QWidget
{
    Q_OBJECT

public:
    explicit deleteScreen(QWidget *parent = nullptr);
    ~deleteScreen();

private slots:
    void on_deleteButton_clicked();

private:
    Ui::deleteScreen *ui;
signals:
    void movieDeleted();
};

#endif // DELETESCREEN_H
