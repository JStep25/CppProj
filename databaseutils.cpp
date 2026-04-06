#include "databaseutils.h"

int DatabaseUtils::getOrCreateId(const QString &tableName, const QString &name) {
    QSqlQuery query(QSqlDatabase::database("myConnection"));

    query.prepare(QString("INSERT INTO %1 (name) VALUES (?) ON CONFLICT (name) DO NOTHING").arg(tableName));
    query.addBindValue(name);
    query.exec();

    query.prepare(QString("SELECT id FROM %1 WHERE name = ?").arg(tableName));
    query.addBindValue(name);
    if (query.exec() && query.next()) {
        return query.value(0).toInt();
    }
    return -1;
}
QPair<double, double> DatabaseUtils::getGlobalStats() {
    QSqlQuery query("SELECT AVG(score), AVG(duration) FROM movies", QSqlDatabase::database("myConnection"));
    if (query.next())
        return {query.value(0).toDouble(), query.value(1).toDouble()};
    return {0.0, 0.0};
}

MovieStats DatabaseUtils::getGenreStats(const QString &genreName) {
    QSqlQuery query(QSqlDatabase::database("myConnection"));
    query.prepare("SELECT AVG(m.score), COUNT(m.id) FROM movies m "
                  "JOIN genres g ON m.genre_id = g.id WHERE g.name = ?");
    query.addBindValue(genreName);
    if (query.exec() && query.next())
        return {query.value(0).toDouble(), query.value(1).toInt()};
    return {0.0, 0};
}


MovieStats DatabaseUtils::getDirectorStats(const QString &directorName) {
    QSqlQuery query(QSqlDatabase::database("myConnection"));
    query.prepare("SELECT AVG(m.score), COUNT(m.id) FROM movies m "
                  "JOIN directors d ON m.director_id = d.id WHERE d.name = ?");
    query.addBindValue(directorName);
    if (query.exec() && query.next())
        return {query.value(0).toDouble(), query.value(1).toInt()};
    return {0.0, 0};
}
void DatabaseUtils::cleanupDirectors() {
    QSqlQuery query(QSqlDatabase::database("myConnection"));
    query.exec("DELETE FROM directors WHERE id NOT IN (SELECT DISTINCT director_id FROM movies)");

}