#ifndef ADDPERSON_H
#define ADDPERSON_H

#include <QDialog>
#include "databasemanager.h"

namespace Ui {
class AddPerson;
}

class AddPerson : public QDialog
{
    Q_OBJECT

public:
    explicit AddPerson(DatabaseManager *dbManager, QWidget *parent = nullptr);
    ~AddPerson();

private slots:
    void on_btnSave_clicked();
    void on_btnReset_clicked();



private:
    Ui::AddPerson *ui;
    DatabaseManager *m_dbManager;
};

#endif // ADDPERSON_H


