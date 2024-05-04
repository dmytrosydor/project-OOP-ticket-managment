#ifndef FINDTPERSON_H
#define FINDTPERSON_H

#include <QDialog>

namespace Ui {
class findtperson;
}

class findtperson : public QDialog
{
    Q_OBJECT

public:
    explicit findtperson(QWidget *parent = nullptr);
    ~findtperson();

private:
    Ui::findtperson *ui;
};

#endif // FINDTPERSON_H
