#include "addperson.h"
#include "ui_addperson.h"

AddPerson::AddPerson(DatabaseManager *dbManager, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddPerson)
    , m_dbManager(dbManager)
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
    QString description = ui->txtdescription->text();

    if (m_dbManager->addPerson(firstname, middlename, lastname, passport, contactN, adress, description)) {
        qDebug() << "Data inserted successfully";
    } else {
        qDebug() << "Error inserting data";
    }

    ui->txtFristName->clear();
    ui->txtMiddleName->clear();
    ui->txtLastName->clear();
    ui->txtContactNumber->clear();
    ui->txtPassportNuber->clear();
    ui->txtAdress->clear();
    ui->txtdescription->clear();
}

void AddPerson::on_btnReset_clicked()
{
    ui->txtFristName->clear();
    ui->txtMiddleName->clear();
    ui->txtLastName->clear();
    ui->txtContactNumber->clear();
    ui->txtPassportNuber->clear();
    ui->txtAdress->clear();
    ui->txtdescription->clear();
}




