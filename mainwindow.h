#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlTableModel>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRelationalDelegate>
#include "addscreen.h"
#include "deletescreen.h"
#include "editscreen.h"
#include "filterscreen.h"
#include "searchscreen.h"
#include "sortscreen.h"
#include "statscreen.h"
#include <QPushButton>
#include <QSqlRecord>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;
    void updateButtons(QPushButton* clickedButton);

private slots:
    void on_addButton_clicked();

    void on_editButton_clicked();

    void on_deleteButton_clicked();

    void on_sortButton_clicked();

    void on_searchButton_clicked();

    void on_filterButton_clicked();

    void on_statsButton_clicked();

    void on_resetAllButton_clicked();

private:
    Ui::MainWindow *ui;
    QSqlTableModel *model;
    addScreen *m_addScreen;
    deleteScreen *m_deleteScreen;
    editScreen *m_editScreen;
    sortScreen *m_sortScreen;
    searchScreen *m_searchScreen;
    filterScreen *m_filterScreen;
    statScreen *m_statScreen;
    void applySearchFilter(const QString &title);
    void applySort(const QString &column, Qt::SortOrder order);
    void applyFilters(const QString &genre, const QString &director);
};
#endif // MAINWINDOW_H
