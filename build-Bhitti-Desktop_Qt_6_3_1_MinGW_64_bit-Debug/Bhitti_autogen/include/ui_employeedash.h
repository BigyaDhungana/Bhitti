/********************************************************************************
** Form generated from reading UI file 'employeedash.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEEDASH_H
#define UI_EMPLOYEEDASH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EmployeeDash
{
public:
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_9;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_4;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_2;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QDialog *EmployeeDash)
    {
        if (EmployeeDash->objectName().isEmpty())
            EmployeeDash->setObjectName(QString::fromUtf8("EmployeeDash"));
        EmployeeDash->resize(440, 296);
        EmployeeDash->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);"));
        gridLayout_6 = new QGridLayout(EmployeeDash);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalSpacer = new QSpacerItem(285, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 0, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(EmployeeDash);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);\n"
"color: rgb(32, 42, 68);"));

        horizontalLayout_4->addWidget(label);


        gridLayout_5->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(129, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(EmployeeDash);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setPointSize(12);
        label_3->setFont(font1);
        label_3->setTabletTracking(false);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);\n"
";\n"
"color: rgb(32, 42, 68);"));

        horizontalLayout_5->addWidget(label_3);


        gridLayout_5->addLayout(horizontalLayout_5, 1, 1, 1, 1);


        verticalLayout_9->addLayout(gridLayout_5);

        verticalSpacer_4 = new QSpacerItem(20, 64, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_4);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame_2 = new QFrame(EmployeeDash);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);"));

        verticalLayout_8->addWidget(label_4);


        verticalLayout_3->addLayout(verticalLayout_8);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(98, 0, 0);"));

        verticalLayout_5->addWidget(label_2);


        verticalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_3->setStretch(0, 10);
        verticalLayout_3->setStretch(1, 90);

        verticalLayout_4->addLayout(verticalLayout_3);


        gridLayout_2->addWidget(frame_2, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(EmployeeDash);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);\n"
"background-color: rgb(122, 122, 122);"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);\n"
"color: rgb(32, 42, 68);"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);\n"
"color: rgb(32, 42, 68);"));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);\n"
"color: rgb(32, 42, 68);"));

        horizontalLayout_2->addWidget(pushButton_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);\n"
"color: rgb(32, 42, 68);"));

        horizontalLayout_3->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);\n"
"color: rgb(32, 42, 68);"));

        horizontalLayout_3->addWidget(pushButton_6);


        verticalLayout_2->addLayout(horizontalLayout_3);


        gridLayout->addWidget(frame, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 1, 1, 1);

        gridLayout->setColumnStretch(0, 90);
        gridLayout->setColumnStretch(1, 10);

        gridLayout_4->addLayout(gridLayout, 0, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        gridLayout_4->setColumnStretch(0, 10);
        gridLayout_4->setColumnStretch(1, 35);
        gridLayout_4->setColumnStretch(2, 20);

        verticalLayout_9->addLayout(gridLayout_4);

        verticalSpacer_5 = new QSpacerItem(20, 64, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_5);

        verticalLayout_9->setStretch(0, 25);
        verticalLayout_9->setStretch(1, 10);
        verticalLayout_9->setStretch(2, 50);
        verticalLayout_9->setStretch(3, 15);

        gridLayout_6->addLayout(verticalLayout_9, 0, 0, 1, 1);


        retranslateUi(EmployeeDash);

        QMetaObject::connectSlotsByName(EmployeeDash);
    } // setupUi

    void retranslateUi(QDialog *EmployeeDash)
    {
        EmployeeDash->setWindowTitle(QCoreApplication::translate("EmployeeDash", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("EmployeeDash", "Hello, Name ", nullptr));
        label_3->setText(QCoreApplication::translate("EmployeeDash", "Your attendance for today was completed at 00:00 am", nullptr));
        label_4->setText(QCoreApplication::translate("EmployeeDash", "Agenda for today", nullptr));
        label_2->setText(QString());
        pushButton->setText(QCoreApplication::translate("EmployeeDash", "New Order", nullptr));
        pushButton_2->setText(QCoreApplication::translate("EmployeeDash", "Track Order", nullptr));
        pushButton_3->setText(QCoreApplication::translate("EmployeeDash", "View Product", nullptr));
        pushButton_4->setText(QCoreApplication::translate("EmployeeDash", "Cancel Order", nullptr));
        pushButton_5->setText(QCoreApplication::translate("EmployeeDash", "Update Order", nullptr));
        pushButton_6->setText(QCoreApplication::translate("EmployeeDash", "Add Order Summary", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EmployeeDash: public Ui_EmployeeDash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEEDASH_H
