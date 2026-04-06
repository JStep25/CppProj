#ifndef SORTSCREEN_H
#define SORTSCREEN_H

#include <QWidget>

namespace Ui {
class sortScreen;
}

class sortScreen : public QWidget
{
    Q_OBJECT

public:
    explicit sortScreen(QWidget *parent = nullptr);
    ~sortScreen();

private:
    Ui::sortScreen *ui;
signals:
    void sortRequested(const QString &column, Qt::SortOrder order);
private slots:
    void on_sortButton_clicked();
    void on_resetButton_clicked();
};

#endif // SORTSCREEN_H
