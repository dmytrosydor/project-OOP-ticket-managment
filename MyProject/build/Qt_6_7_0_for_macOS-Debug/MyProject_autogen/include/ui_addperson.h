/********************************************************************************
** Form generated from reading UI file 'addperson.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPERSON_H
#define UI_ADDPERSON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddPerson
{
public:
    QWidget *formLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_3;
    QLineEdit *txtFristName;
    QLineEdit *txtLastName;
    QLineEdit *txtContactNumber;
    QLineEdit *txtMiddleName;
    QLineEdit *txtPassportNuber;
    QLineEdit *txtAdress;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *txtdescription;
    QPushButton *btnSave;
    QPushButton *btnReset;

    void setupUi(QDialog *AddPerson)
    {
        if (AddPerson->objectName().isEmpty())
            AddPerson->setObjectName("AddPerson");
        AddPerson->setWindowModality(Qt::WindowModal);
        AddPerson->resize(574, 437);
        formLayoutWidget = new QWidget(AddPerson);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(50, 20, 471, 351));
        gridLayout = new QGridLayout(formLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        txtFristName = new QLineEdit(formLayoutWidget);
        txtFristName->setObjectName("txtFristName");

        gridLayout->addWidget(txtFristName, 0, 1, 1, 1);

        txtLastName = new QLineEdit(formLayoutWidget);
        txtLastName->setObjectName("txtLastName");

        gridLayout->addWidget(txtLastName, 2, 1, 1, 1);

        txtContactNumber = new QLineEdit(formLayoutWidget);
        txtContactNumber->setObjectName("txtContactNumber");

        gridLayout->addWidget(txtContactNumber, 4, 1, 1, 1);

        txtMiddleName = new QLineEdit(formLayoutWidget);
        txtMiddleName->setObjectName("txtMiddleName");

        gridLayout->addWidget(txtMiddleName, 1, 1, 1, 1);

        txtPassportNuber = new QLineEdit(formLayoutWidget);
        txtPassportNuber->setObjectName("txtPassportNuber");

        gridLayout->addWidget(txtPassportNuber, 3, 1, 1, 1);

        txtAdress = new QLineEdit(formLayoutWidget);
        txtAdress->setObjectName("txtAdress");

        gridLayout->addWidget(txtAdress, 5, 1, 1, 1);

        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        txtdescription = new QLineEdit(formLayoutWidget);
        txtdescription->setObjectName("txtdescription");

        gridLayout->addWidget(txtdescription, 6, 1, 1, 1);

        btnSave = new QPushButton(AddPerson);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(410, 380, 100, 32));
        btnReset = new QPushButton(AddPerson);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(60, 380, 100, 32));

        retranslateUi(AddPerson);

        QMetaObject::connectSlotsByName(AddPerson);
    } // setupUi

    void retranslateUi(QDialog *AddPerson)
    {
        AddPerson->setWindowTitle(QCoreApplication::translate("AddPerson", "Add Person", nullptr));
        label_2->setText(QCoreApplication::translate("AddPerson", " Middle Name ", nullptr));
        label_5->setText(QCoreApplication::translate("AddPerson", "Contact Number", nullptr));
        label_3->setText(QCoreApplication::translate("AddPerson", "Last Name     ", nullptr));
        label->setText(QCoreApplication::translate("AddPerson", "First Name     ", nullptr));
        label_4->setText(QCoreApplication::translate("AddPerson", "Passport Number", nullptr));
        label_6->setText(QCoreApplication::translate("AddPerson", "Adress", nullptr));
        label_7->setText(QCoreApplication::translate("AddPerson", "Description ", nullptr));
        btnSave->setText(QCoreApplication::translate("AddPerson", "Save", nullptr));
        btnReset->setText(QCoreApplication::translate("AddPerson", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPerson: public Ui_AddPerson {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPERSON_H
