#ifndef SEARCHSCREEN_H
#define SEARCHSCREEN_H

#include <QWidget>

namespace Ui {
class searchScreen;
}

class searchScreen : public QWidget
{
    Q_OBJECT

public:
    explicit searchScreen(QWidget *parent = nullptr);
    ~searchScreen();

private:
    Ui::searchScreen *ui;
signals:
    void searchRequested(const QString &title);
private slots:
    void on_searchButton_clicked();
    void on_resetButton_clicked();
};

#endif // SEARCHSCREEN_H
