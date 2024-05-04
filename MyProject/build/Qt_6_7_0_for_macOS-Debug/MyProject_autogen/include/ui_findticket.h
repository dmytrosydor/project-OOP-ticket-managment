/********************************************************************************
** Form generated from reading UI file 'findticket.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDTICKET_H
#define UI_FINDTICKET_H

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

class Ui_findticket
{
public:
    QLabel *label;
    QLabel *label_3;
    QTableView *tableView;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *txtFrom;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnFind;

    void setupUi(QDialog *findticket)
    {
        if (findticket->objectName().isEmpty())
            findticket->setObjectName("findticket");
        findticket->resize(531, 396);
        label = new QLabel(findticket);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 20, 91, 16));
        label_3 = new QLabel(findticket);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 100, 58, 16));
        tableView = new QTableView(findticket);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(30, 120, 441, 241));
        widget = new QWidget(findticket);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 70, 441, 33));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        txtFrom = new QLineEdit(widget);
        txtFrom->setObjectName("txtFrom");

        horizontalLayout->addWidget(txtFrom);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnFind = new QPushButton(widget);
        btnFind->setObjectName("btnFind");

        horizontalLayout->addWidget(btnFind);


        retranslateUi(findticket);

        QMetaObject::connectSlotsByName(findticket);
    } // setupUi

    void retranslateUi(QDialog *findticket)
    {
        findticket->setWindowTitle(QCoreApplication::translate("findticket", "Find Ticket", nullptr));
        label->setText(QCoreApplication::translate("findticket", "Ticket Finder", nullptr));
        label_3->setText(QString());
        label_2->setText(QCoreApplication::translate("findticket", "From", nullptr));
        btnFind->setText(QCoreApplication::translate("findticket", "Find", nullptr));
    } // retranslateUi

};

namespace Ui {
    class findticket: public Ui_findticket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDTICKET_H
