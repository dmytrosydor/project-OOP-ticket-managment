#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ptrAddPerson = new AddPerson();
    ptrAddTicket = new AddTicket();
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

