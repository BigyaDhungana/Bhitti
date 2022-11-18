/********************************************************************************
** Form generated from reading UI file 'attendance.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTENDANCE_H
#define UI_ATTENDANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Attendance
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *Attendance)
    {
        if (Attendance->objectName().isEmpty())
            Attendance->setObjectName(QString::fromUtf8("Attendance"));
        Attendance->resize(417, 287);
        Attendance->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);"));
        gridLayout = new QGridLayout(Attendance);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(Attendance);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);"));

        horizontalLayout->addWidget(label_2);

        comboBox = new QComboBox(Attendance);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(Attendance);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(55, 55, 55);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pushButton);

        horizontalLayout->setStretch(1, 20);
        horizontalLayout->setStretch(2, 10);

        gridLayout->addLayout(horizontalLayout, 3, 1, 1, 1);

        label = new QLabel(Attendance);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(18);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);\n"
"color: rgb(32, 42, 68);"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 1, 1, 1);

        gridLayout->setRowStretch(0, 30);
        gridLayout->setRowStretch(3, 10);
        gridLayout->setRowStretch(4, 40);

        retranslateUi(Attendance);

        QMetaObject::connectSlotsByName(Attendance);
    } // setupUi

    void retranslateUi(QDialog *Attendance)
    {
        Attendance->setWindowTitle(QCoreApplication::translate("Attendance", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("Attendance", "Select Employee", nullptr));
        pushButton->setText(QCoreApplication::translate("Attendance", "Submit", nullptr));
        label->setText(QCoreApplication::translate("Attendance", "Attendance Report", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Attendance: public Ui_Attendance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTENDANCE_H
