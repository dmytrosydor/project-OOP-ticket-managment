/********************************************************************************
** Form generated from reading UI file 'addticket.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTICKET_H
#define UI_ADDTICKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddTicket
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *txtticketFrom;
    QLineEdit *txtticketDestination;
    QLabel *label_3;
    QLineEdit *txtPrice;
    QPushButton *btnSave;
    QPushButton *btnReset;

    void setupUi(QDialog *AddTicket)
    {
        if (AddTicket->objectName().isEmpty())
            AddTicket->setObjectName("AddTicket");
        AddTicket->setWindowModality(Qt::NonModal);
        AddTicket->resize(400, 300);
        formLayoutWidget = new QWidget(AddTicket);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(20, 20, 351, 85));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtticketFrom = new QLineEdit(formLayoutWidget);
        txtticketFrom->setObjectName("txtticketFrom");

        formLayout->setWidget(0, QFormLayout::FieldRole, txtticketFrom);

        txtticketDestination = new QLineEdit(formLayoutWidget);
        txtticketDestination->setObjectName("txtticketDestination");

        formLayout->setWidget(1, QFormLayout::FieldRole, txtticketDestination);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        txtPrice = new QLineEdit(formLayoutWidget);
        txtPrice->setObjectName("txtPrice");

        formLayout->setWidget(2, QFormLayout::FieldRole, txtPrice);

        btnSave = new QPushButton(AddTicket);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(280, 240, 100, 32));
        btnReset = new QPushButton(AddTicket);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(170, 240, 100, 32));

        retranslateUi(AddTicket);

        QMetaObject::connectSlotsByName(AddTicket);
    } // setupUi

    void retranslateUi(QDialog *AddTicket)
    {
        AddTicket->setWindowTitle(QCoreApplication::translate("AddTicket", "Add Ticket", nullptr));
        label_2->setText(QCoreApplication::translate("AddTicket", " Destination", nullptr));
        label->setText(QCoreApplication::translate("AddTicket", " From          ", nullptr));
        label_3->setText(QCoreApplication::translate("AddTicket", "Price          ", nullptr));
        btnSave->setText(QCoreApplication::translate("AddTicket", "Save", nullptr));
        btnReset->setText(QCoreApplication::translate("AddTicket", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddTicket: public Ui_AddTicket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTICKET_H
