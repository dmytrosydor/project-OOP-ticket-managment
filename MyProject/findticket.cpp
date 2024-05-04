#include "findticket.h"
#include "ui_findticket.h"
#include "dbHeader.h"

findticket::findticket(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::findticket)
{
    ui->setupUi(this);
}

findticket::~findticket()
{
    delete ui;
}

void findticket::on_btnFind_clicked()
{
    QString ticketname = ui->txtFrom->text();
    qDebug() << "Ticket name: " << ticketname;

    // Встановлення з'єднання з базою даних "Myproject.db"
    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("/Users/user/Desktop/project/database/Myproject.db");

    // Перевірка, чи з'єднання успішно встановлене
    if (!database.open()) {
        qDebug() << "Database connection failed:" << database.lastError().text();
        return;
    }

    // Створення об'єкта запиту до бази даних
    QSqlQuery query(database);


    if (!query.exec("SELECT * FROM Ticket WHERE `From` LIKE '%" + ticketname + "%'")) {
        qDebug() << "Query execution failed:" << query.lastError().text();
        return;
    }


    model = new QSqlQueryModel();
    model->setQuery(query);


    ui->tableView->setModel(model);


    database.close();
}



