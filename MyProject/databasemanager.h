// databasemanager.h
#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>

class DatabaseManager : public QObject
{
    Q_OBJECT
public:
    explicit DatabaseManager(QObject *parent = nullptr);
    ~DatabaseManager(); // Add destructor declaration

    bool addPerson(const QString &firstName, const QString &middleName, const QString &lastName, const QString &passport, const QString &contactNumber, const QString &address, const QString &description);
    bool addTicket(const QString &from, const QString &destination, const QString &price);

private:
    QSqlDatabase m_database;
};

#endif // DATABASEMANAGER_H
