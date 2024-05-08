#include "addticket.h"
#include "ui_addticket.h"
#include "dbHeader.h"
#include "datahandler.h"

AddTicket::AddTicket(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddTicket)
{
    ui->setupUi(this);
}

AddTicket::~AddTicket()
{
    delete ui;
}

void AddTicket::on_btnSave_clicked()
{
    QString ticketFrom = ui->txtticketFrom->text();
    QString ticketDest = ui->txtticketDestination->text();
    QString ticketPrice = ui->txtPrice->text();
    DataHandler dataHandler(ticketFrom, ticketDest, ticketPrice);
    dataHandler.processAndPrintData();

    qDebug()<<"Ticket info From: "<<ticketFrom<<" Destination: "<<ticketDest<<" Price: "<<ticketPrice<<' ';

    QSqlDatabase database  = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("/Users/user/Desktop/project/database/Myproject.db");

    if(QFile::exists("/Users/user/Desktop/project/database/Myproject.db")){

    }
    else{
        qDebug() << "Database doesn't exist";
        return;
    }

    if(!database.open()){
        qDebug()<<"Unable to open a database";
        return;
    }
    else {

    }

    QSqlQuery query(database);
    query.prepare("INSERT INTO Ticket ('From', Destination, Price) VALUES (?, ?, ?)");
    query.bindValue(0, ticketFrom);
    query.bindValue(1, ticketDest);
    query.bindValue(2, ticketPrice);

    if (!query.exec()) {
        qDebug() << "Error executing query:" << query.lastError().text();
    }

    database.close();
    ui->txtticketDestination->clear();
    ui->txtticketFrom->clear();
    ui->txtPrice->clear();

}



void AddTicket::on_btnReset_clicked()
{
    ui->txtticketDestination->clear();
    ui->txtticketFrom->clear();
    ui->txtPrice->clear();
}

