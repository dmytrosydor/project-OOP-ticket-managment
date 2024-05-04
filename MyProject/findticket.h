#ifndef FINDTICKET_H
#define FINDTICKET_H

#include <QDialog>
#include "dbHeader.h"


namespace Ui {
class findticket;
}

class findticket : public QDialog
{
    Q_OBJECT

public:
    explicit findticket(QWidget *parent = nullptr);
    ~findticket();

private slots:
    void on_btnFind_clicked();

private:
    Ui::findticket *ui;
    QSqlQueryModel *model;
};

#endif // FINDTICKET_H
