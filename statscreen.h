#ifndef STATSCREEN_H
#define STATSCREEN_H

#include <QWidget>
#include "databaseutils.h"

namespace Ui {
class statScreen;
}

class statScreen : public QWidget
{
    Q_OBJECT

public:
    explicit statScreen(QWidget *parent = nullptr);
    void refreshComboBoxes();
    ~statScreen();

private slots:
    void on_showButton_clicked();

private:
    Ui::statScreen *ui;
};

#endif // STATSCREEN_H
