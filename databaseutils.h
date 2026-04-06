#ifndef DATABASEUTILS_H
#define DATABASEUTILS_H

#include <QString>
#include <QSqlQuery>
#include <QVariant>
struct MovieStats {
    double average;
    int count;
};
class DatabaseUtils {
public:
    static int getOrCreateId(const QString &tableName, const QString &name);
    static QPair<double, double> getGlobalStats();
    static MovieStats getGenreStats(const QString &genreName);
    static MovieStats getDirectorStats(const QString &directorName);
    static void cleanupDirectors();
};

#endif