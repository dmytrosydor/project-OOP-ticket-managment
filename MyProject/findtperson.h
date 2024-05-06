#ifndef FINDTPERSON_H
#define FINDTPERSON_H

#include <QDialog>
#include "dbHeader.h"

namespace Ui {
class findtperson;
}

class findtperson : public QDialog
{
    Q_OBJECT

public:
    explicit findtperson(QWidget *parent = nullptr);
    ~findtperson();

private slots:
    void on_btnFind_clicked();

private:
    Ui::findtperson *ui;
    QSqlQueryModel *model;

};

#endif // FINDTPERSON_H
