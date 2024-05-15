// Ваш файл mainwindow.cpp
#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Створення екземпляра DatabaseManager
    DatabaseManager *dbManager = new DatabaseManager(this);

    // Передача dbManager до конструктора AddPerson
    ptrAddPerson = new AddPerson(dbManager, this);

    // Передача dbManager до конструктора AddTicket
    ptrAddTicket = new AddTicket(dbManager, this);

    // Тут може знадобитися модифікувати findtperson та findticket для передачі dbManager
    ptrFindPerson = new findtperson();
    ptrFindTicket = new findticket();
}

MainWindow::~MainWindow()
{
    delete ptrAddPerson;
    delete ptrAddTicket;
    delete ptrFindPerson;
    delete ptrFindTicket;
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ptrAddPerson->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    ptrAddTicket->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    ptrFindTicket->show();
}

void MainWindow::on_pushButton_4_clicked()
{
    ptrFindPerson->show();
}
