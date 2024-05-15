// databasemanager.cpp
#include "databasemanager.h"
#include <QDebug>
#include <QSqlError>

DatabaseManager::DatabaseManager(QObject *parent) : QObject(parent)
{
    if(QSqlDatabase::contains("qt_sql_default_connection")) {
        m_database = QSqlDatabase::database("qt_sql_default_connection");
    } else {
        m_database = QSqlDatabase::addDatabase("QSQLITE", "qt_sql_default_connection");
        m_database.setDatabaseName("/Users/user/Desktop/project/database/Myproject.db");

        if(!m_database.open()) {
            qDebug() << "Unable to open database";
        }
    }
}


DatabaseManager::~DatabaseManager()
{
    // Close the database
    m_database.close();

    // Remove the database connection
    QSqlDatabase::removeDatabase("qt_sql_default_connection");
}


bool DatabaseManager::addPerson(const QString &firstName, const QString &middleName, const QString &lastName, const QString &passport, const QString &contactNumber, const QString &address, const QString &description)
{
    QSqlQuery query(m_database);
    query.prepare("INSERT INTO Person (FirstName, MiddleName, LastName, Passport, Contact, Adress, Description) VALUES (?, ?, ?, ?, ?, ?, ?)");
    query.bindValue(0, firstName);
    query.bindValue(1, middleName);
    query.bindValue(2, lastName);
    query.bindValue(3, passport);
    query.bindValue(4, contactNumber);
    query.bindValue(5, address);
    query.bindValue(6, description);

    if (!query.exec()) {
        qDebug() << "Error inserting data into Person table:" << query.lastError().text();
        return false;
    }

    return true;
}





bool DatabaseManager::addTicket(const QString &from, const QString &destination, const QString &price)
{
    QSqlQuery query(m_database);
    query.prepare("INSERT INTO Ticket (`From`, Destination, Price) VALUES (?, ?, ?)");
    query.bindValue(0, from);
    query.bindValue(1, destination);
    query.bindValue(2, price);

    if (!query.exec()) {
        qDebug() << "Error inserting data into Ticket table:" << query.lastError().text();
        return false;
    }

    return true;
}


