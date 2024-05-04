#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "addperson.h"
#include "addticket.h"
#include "findticket.h"
#include "findtperson.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
    AddTicket *ptrAddTicket;
    AddPerson *ptrAddPerson;
    findticket *ptrFindTicket;
    findtperson *ptrFindPerson;
};
#endif // MAINWINDOW_H
