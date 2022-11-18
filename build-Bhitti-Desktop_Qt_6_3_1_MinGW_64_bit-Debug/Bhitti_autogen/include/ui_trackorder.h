/********************************************************************************
** Form generated from reading UI file 'trackorder.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACKORDER_H
#define UI_TRACKORDER_H

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

class Ui_TrackOrder
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *TrackOrder)
    {
        if (TrackOrder->objectName().isEmpty())
            TrackOrder->setObjectName(QString::fromUtf8("TrackOrder"));
        TrackOrder->resize(375, 276);
        TrackOrder->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);"));
        gridLayout = new QGridLayout(TrackOrder);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 1, -1, 70);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(TrackOrder);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(TrackOrder);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(228, 228, 228);"));

        horizontalLayout->addWidget(lineEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(TrackOrder);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(55, 55, 55);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pushButton);

        horizontalLayout->setStretch(1, 40);

        gridLayout->addLayout(horizontalLayout, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 2, 1, 1);

        label = new QLabel(TrackOrder);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(18);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 0, 1, 1, 1);

        gridLayout->setRowMinimumHeight(0, 40);
        gridLayout->setRowMinimumHeight(2, 20);
        gridLayout->setRowMinimumHeight(3, 40);
        gridLayout->setRowMinimumHeight(4, 20);

        retranslateUi(TrackOrder);

        QMetaObject::connectSlotsByName(TrackOrder);
    } // setupUi

    void retranslateUi(QDialog *TrackOrder)
    {
        TrackOrder->setWindowTitle(QCoreApplication::translate("TrackOrder", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("TrackOrder", "Order I.D", nullptr));
        pushButton->setText(QCoreApplication::translate("TrackOrder", "Track", nullptr));
        label->setText(QCoreApplication::translate("TrackOrder", "Track Order", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrackOrder: public Ui_TrackOrder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACKORDER_H
