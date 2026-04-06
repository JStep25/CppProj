#ifndef FILTERSCREEN_H
#define FILTERSCREEN_H

#include <QWidget>
#include "databaseutils.h"
#include <QSqlQuery>
namespace Ui {
class filterScreen;
}

class filterScreen : public QWidget
{
    Q_OBJECT

public:
    explicit filterScreen(QWidget *parent = nullptr);
    ~filterScreen();
    void refreshComboBoxes();

private:
    Ui::filterScreen *ui;
    void refreshDirectors();

signals:
    void filterRequested(const QString &genre, const QString &director);
private slots:
    void on_resetButton_clicked();
    void on_filtrButton_clicked();
};

#endif // FILTERSCREEN_H
