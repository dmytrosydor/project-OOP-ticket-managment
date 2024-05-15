#include "addticket.h"
#include "ui_addticket.h"

AddTicket::AddTicket(DatabaseManager *dbManager, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddTicket)
    , m_dbManager(dbManager)
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

    if (m_dbManager->addTicket(ticketFrom, ticketDest, ticketPrice)) {
        qDebug() << "Data inserted successfully";
    } else {
        qDebug() << "Error inserting data";
    }

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
