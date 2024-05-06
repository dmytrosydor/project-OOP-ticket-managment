#include "findtperson.h"
#include "ui_findtperson.h"

findtperson::findtperson(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::findtperson)
{
    ui->setupUi(this);
}

findtperson::~findtperson()
{
    delete ui;
}

void findtperson::on_btnFind_clicked()
{
    QString personName = ui->txtName->text();
    qDebug()<<"Package name : "<<personName;
    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("/Users/user/Desktop/project/database/Myproject.db");
    // Перевірка, чи з'єднання успішно встановлене
    if (!database.open()) {
        qDebug() << "Database connection failed:" << database.lastError().text();
        return;
    }

    // Створення об'єкта запиту до бази даних
    QSqlQuery query(database);


    if (!query.exec("SELECT * FROM Person WHERE `FirstName` LIKE '%" + personName + "%'")) {
        qDebug() << "Query execution failed:" << query.lastError().text();
        return;
    }


    model = new QSqlQueryModel();
    model->setQuery(query);


    ui->tableView->setModel(model);


    database.close();
}

