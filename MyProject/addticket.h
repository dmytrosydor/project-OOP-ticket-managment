#ifndef ADDTICKET_H
#define ADDTICKET_H

#include <QDialog>

namespace Ui {
class AddTicket;
}

class AddTicket : public QDialog
{
    Q_OBJECT

public:
    explicit AddTicket(QWidget *parent = nullptr);
    ~AddTicket();

private slots:
    void on_btnSave_clicked();

    void on_btnReset_clicked();

private:
    Ui::AddTicket *ui;
};

#endif // ADDTICKET_H
