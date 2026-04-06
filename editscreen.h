#ifndef EDITSCREEN_H
#define EDITSCREEN_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include "databaseutils.h"
namespace Ui {
class editScreen;
}

class editScreen : public QWidget
{
    Q_OBJECT

public:
    explicit editScreen(QWidget *parent = nullptr);
    ~editScreen();

private:
    Ui::editScreen *ui;
signals:
    void movieEdited();
private slots:
    void on_editButton_clicked();
};

#endif // EDITSCREEN_H
