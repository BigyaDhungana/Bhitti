/********************************************************************************
** Form generated from reading UI file 'cancelorder.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANCELORDER_H
#define UI_CANCELORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_CancelOrder
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *CancelOrder)
    {
        if (CancelOrder->objectName().isEmpty())
            CancelOrder->setObjectName(QString::fromUtf8("CancelOrder"));
        CancelOrder->resize(334, 253);
        CancelOrder->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);"));
        gridLayout = new QGridLayout(CancelOrder);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(CancelOrder);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(CancelOrder);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(228, 228, 228);"));

        horizontalLayout->addWidget(lineEdit);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButton = new QPushButton(CancelOrder);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(55, 55, 55);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pushButton);

        horizontalLayout->setStretch(1, 30);

        gridLayout->addLayout(horizontalLayout, 2, 2, 1, 1);

        label = new QLabel(CancelOrder);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(18);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);"));

        gridLayout->addWidget(label, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        gridLayout->setRowStretch(0, 20);
        gridLayout->setRowStretch(1, 15);
        gridLayout->setRowStretch(2, 40);
        gridLayout->setRowStretch(3, 40);

        retranslateUi(CancelOrder);

        QMetaObject::connectSlotsByName(CancelOrder);
    } // setupUi

    void retranslateUi(QDialog *CancelOrder)
    {
        CancelOrder->setWindowTitle(QCoreApplication::translate("CancelOrder", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("CancelOrder", "Product I.D", nullptr));
        pushButton->setText(QCoreApplication::translate("CancelOrder", "Get Details", nullptr));
        label->setText(QCoreApplication::translate("CancelOrder", "Cancel Order", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CancelOrder: public Ui_CancelOrder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANCELORDER_H
