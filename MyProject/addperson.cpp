#include "addperson.h"
#include "ui_addperson.h"
#include "dbHeader.h"

AddPerson::AddPerson(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddPerson)
{
    ui->setupUi(this);
}

AddPerson::~AddPerson()
{
    delete ui;
}

void AddPerson::on_btnSave_clicked()
{
    QString firstname = ui->txtFristName->text();
    QString middlename = ui->txtMiddleName->text();
    QString lastname = ui->txtLastName->text();
    QString passport = ui->txtPassportNuber->text();
    QString contactN = ui->txtContactNumber->text();
    QString adress = ui->txtAdress->text();
    QString destination = ui->cmbChooseDestination->currentText();

    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("/Users/user/Desktop/project/database/Myproject.db");

    if(!database.open()){
        qDebug() << "Unable to open database";
        return;
    }
    else {
        qDebug() << "Database opened successfully";
    }

    QSqlQuery query(database);
    query.prepare("INSERT INTO Person (FirstName, MiddleName, LastName, Passport, Contact, Adress, Ticket) VALUES (?, ?, ?, ?, ?, ?, ?)");
    query.bindValue(0, firstname);
    query.bindValue(1, middlename);
    query.bindValue(2, lastname);
    query.bindValue(3, passport);
    query.bindValue(4, contactN);
    query.bindValue(5, adress);
    query.bindValue(6, destination);

    if (!query.exec()) {
        qDebug() << "Error executing query:" << query.lastError().text();
    } else {
        qDebug() << "Data inserted successfully";
    }

    database.close();
}

