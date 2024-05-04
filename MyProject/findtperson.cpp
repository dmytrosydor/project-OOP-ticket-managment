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
