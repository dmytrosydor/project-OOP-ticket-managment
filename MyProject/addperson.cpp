#include "addperson.h"
#include "ui_addperson.h"

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
}

