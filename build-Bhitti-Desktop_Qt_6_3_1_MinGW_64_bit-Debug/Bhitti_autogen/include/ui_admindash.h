/********************************************************************************
** Form generated from reading UI file 'admindash.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINDASH_H
#define UI_ADMINDASH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AdminDash
{
public:
    QGridLayout *gridLayout_5;
    QLabel *label_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton_11;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QTextEdit *textEdit;
    QLabel *label_3;
    QComboBox *comboBox;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_12;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *AdminDash)
    {
        if (AdminDash->objectName().isEmpty())
            AdminDash->setObjectName(QString::fromUtf8("AdminDash"));
        AdminDash->resize(443, 316);
        AdminDash->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);"));
        gridLayout_5 = new QGridLayout(AdminDash);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_4 = new QLabel(AdminDash);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Asus/Downloads/Vitti_Logo_FullRes.png")));
        label_4->setScaledContents(true);

        gridLayout_5->addWidget(label_4, 2, 1, 1, 1);

        label = new QLabel(AdminDash);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);\n"
"color: rgb(32, 42, 68);"));

        gridLayout_5->addWidget(label, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox_3 = new QGroupBox(AdminDash);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(59, 59, 59);"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        pushButton_6 = new QPushButton(groupBox_3);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);\n"
"background-color: rgb(122, 122, 122);"));

        verticalLayout_4->addWidget(pushButton_6);

        pushButton_8 = new QPushButton(groupBox_3);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);\n"
"color: rgb(32, 42, 68);"));

        verticalLayout_4->addWidget(pushButton_8);

        pushButton_7 = new QPushButton(groupBox_3);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);\n"
"color: rgb(32, 42, 68);"));

        verticalLayout_4->addWidget(pushButton_7);


        gridLayout_3->addLayout(verticalLayout_4, 0, 0, 1, 1);


        horizontalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(AdminDash);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setStyleSheet(QString::fromUtf8("background-color: rgb(59, 59, 59);"));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        pushButton_11 = new QPushButton(groupBox_4);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_11->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);\n"
"background-color: rgb(122, 122, 122);"));

        verticalLayout_5->addWidget(pushButton_11);

        pushButton_9 = new QPushButton(groupBox_4);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);\n"
"color: rgb(32, 42, 68);"));

        verticalLayout_5->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(groupBox_4);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_10->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);\n"
"color: rgb(32, 42, 68);"));

        verticalLayout_5->addWidget(pushButton_10);


        gridLayout_4->addLayout(verticalLayout_5, 0, 0, 1, 1);


        horizontalLayout->addWidget(groupBox_4);


        gridLayout_5->addLayout(horizontalLayout, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 3, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(AdminDash);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(55, 55, 55);"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(208, 208, 208);"));

        gridLayout->addWidget(label_2, 0, 0, 1, 2);

        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(208, 208, 208);"));

        gridLayout->addWidget(textEdit, 1, 0, 1, 2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(208, 208, 208);"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setStyleSheet(QString::fromUtf8("color: rgb(208, 208, 208);"));

        gridLayout->addWidget(comboBox, 2, 1, 1, 1);


        verticalLayout->addWidget(groupBox);


        gridLayout_5->addLayout(verticalLayout, 2, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox_2 = new QGroupBox(AdminDash);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(59, 59, 59);"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);\n"
"background-color: rgb(122, 122, 122);"));

        verticalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);\n"
"color: rgb(32, 42, 68);"));

        verticalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);\n"
"color: rgb(32, 42, 68);"));

        verticalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);\n"
"color: rgb(32, 42, 68);"));

        verticalLayout_2->addWidget(pushButton_4);


        gridLayout_2->addWidget(groupBox_2, 0, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_2, 2, 3, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_12 = new QPushButton(AdminDash);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_12->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);\n"
"background-color: rgb(122, 122, 122);"));

        horizontalLayout_3->addWidget(pushButton_12);


        gridLayout_5->addLayout(horizontalLayout_3, 4, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_2, 1, 1, 1, 1);


        retranslateUi(AdminDash);

        QMetaObject::connectSlotsByName(AdminDash);
    } // setupUi

    void retranslateUi(QDialog *AdminDash)
    {
        AdminDash->setWindowTitle(QCoreApplication::translate("AdminDash", "Dialog", nullptr));
        label_4->setText(QString());
        label->setText(QCoreApplication::translate("AdminDash", "Hello,Admin!", nullptr));
        groupBox_3->setTitle(QString());
        pushButton_6->setText(QCoreApplication::translate("AdminDash", "View Inventory", nullptr));
        pushButton_8->setText(QCoreApplication::translate("AdminDash", "Add Product", nullptr));
        pushButton_7->setText(QCoreApplication::translate("AdminDash", "Delete Product", nullptr));
        groupBox_4->setTitle(QString());
        pushButton_11->setText(QCoreApplication::translate("AdminDash", "View Employees", nullptr));
        pushButton_9->setText(QCoreApplication::translate("AdminDash", "Add Employee", nullptr));
        pushButton_10->setText(QCoreApplication::translate("AdminDash", "Delete Employee", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("AdminDash", "Add new agenda", nullptr));
        label_3->setText(QCoreApplication::translate("AdminDash", "To", nullptr));
        groupBox_2->setTitle(QString());
        pushButton->setText(QCoreApplication::translate("AdminDash", "New Order", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AdminDash", "Track Order", nullptr));
        pushButton_3->setText(QCoreApplication::translate("AdminDash", "View Product", nullptr));
        pushButton_4->setText(QCoreApplication::translate("AdminDash", "Cancel Order", nullptr));
        pushButton_12->setText(QCoreApplication::translate("AdminDash", "View Attendance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminDash: public Ui_AdminDash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINDASH_H
