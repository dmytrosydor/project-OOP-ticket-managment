/********************************************************************************
** Form generated from reading UI file 'findtperson.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDTPERSON_H
#define UI_FINDTPERSON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_findtperson
{
public:
    QLabel *label;
    QLabel *label_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *txtName;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnFind;
    QTableView *tableView;

    void setupUi(QDialog *findtperson)
    {
        if (findtperson->objectName().isEmpty())
            findtperson->setObjectName("findtperson");
        findtperson->resize(692, 519);
        label = new QLabel(findtperson);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 20, 91, 16));
        label_3 = new QLabel(findtperson);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 100, 58, 16));
        layoutWidget = new QWidget(findtperson);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 70, 551, 33));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        txtName = new QLineEdit(layoutWidget);
        txtName->setObjectName("txtName");

        horizontalLayout->addWidget(txtName);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnFind = new QPushButton(layoutWidget);
        btnFind->setObjectName("btnFind");

        horizontalLayout->addWidget(btnFind);

        tableView = new QTableView(findtperson);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(20, 120, 651, 371));

        retranslateUi(findtperson);

        QMetaObject::connectSlotsByName(findtperson);
    } // setupUi

    void retranslateUi(QDialog *findtperson)
    {
        findtperson->setWindowTitle(QCoreApplication::translate("findtperson", "find Person", nullptr));
        label->setText(QCoreApplication::translate("findtperson", "Person Finder", nullptr));
        label_3->setText(QString());
        label_2->setText(QCoreApplication::translate("findtperson", "Name", nullptr));
        btnFind->setText(QCoreApplication::translate("findtperson", "Find", nullptr));
    } // retranslateUi

};

namespace Ui {
    class findtperson: public Ui_findtperson {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDTPERSON_H
