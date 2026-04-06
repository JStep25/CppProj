#include "mainwindow.h"

#include <QApplication>
#include "database.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    dataBase db;
    if (!db.connect()) {
        return -1;
    }
    db.initDbFromSqlFile(":/sql/schema.sql");
    MainWindow w;
    w.show();
    return QCoreApplication::exec();
}
