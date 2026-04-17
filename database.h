#ifndef DATABASE_H
#define DATABASE_H
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>

class dataBase
{
public:
    dataBase();
    bool connect();
    void createTable();
    bool initDbFromSqlFile(const QString &filePath);
private:
    QSqlDatabase db;
};

#endif // DATABASE_H


