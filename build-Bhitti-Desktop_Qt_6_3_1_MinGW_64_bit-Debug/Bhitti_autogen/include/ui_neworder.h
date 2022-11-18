/********************************************************************************
** Form generated from reading UI file 'neworder.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWORDER_H
#define UI_NEWORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NewOrder
{
public:
    QGridLayout *gridLayout_8;
    QLabel *label_10;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QSpacerItem *horizontalSpacer_6;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QSpacerItem *horizontalSpacer_8;
    QGridLayout *gridLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QSpacerItem *horizontalSpacer_10;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QLineEdit *lineEdit_7;
    QSpacerItem *horizontalSpacer;
    QLabel *label_7;
    QLineEdit *lineEdit_6;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_15;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *pushButton;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *NewOrder)
    {
        if (NewOrder->objectName().isEmpty())
            NewOrder->setObjectName(QString::fromUtf8("NewOrder"));
        NewOrder->resize(448, 333);
        QFont font;
        font.setPointSize(14);
        NewOrder->setFont(font);
        NewOrder->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);"));
        gridLayout_8 = new QGridLayout(NewOrder);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_10 = new QLabel(NewOrder);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QFont font1;
        font1.setPointSize(18);
        label_10->setFont(font1);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);"));

        gridLayout_8->addWidget(label_10, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(NewOrder);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);\n"
""));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(NewOrder);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        horizontalLayout->addWidget(lineEdit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(NewOrder);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);\n"
""));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_2 = new QLineEdit(NewOrder);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        horizontalLayout_2->addWidget(lineEdit_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        gridLayout_4->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(NewOrder);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);"));

        horizontalLayout_3->addWidget(label_4);

        lineEdit_3 = new QLineEdit(NewOrder);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));
        lineEdit_3->setInputMethodHints(Qt::ImhFormattedNumbersOnly);

        horizontalLayout_3->addWidget(lineEdit_3);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        gridLayout_5->addLayout(horizontalLayout_3, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_5);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(NewOrder);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);"));

        horizontalLayout_4->addWidget(label_5);

        lineEdit_4 = new QLineEdit(NewOrder);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        horizontalLayout_4->addWidget(lineEdit_4);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        gridLayout_6->addLayout(horizontalLayout_4, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_6);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(NewOrder);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);"));

        horizontalLayout_5->addWidget(label_6);

        lineEdit_5 = new QLineEdit(NewOrder);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        horizontalLayout_5->addWidget(lineEdit_5);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);


        gridLayout_7->addLayout(horizontalLayout_5, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_7);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(10);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_8 = new QLabel(NewOrder);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);"));

        horizontalLayout_6->addWidget(label_8);

        lineEdit_7 = new QLineEdit(NewOrder);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        horizontalLayout_6->addWidget(lineEdit_7);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        label_7 = new QLabel(NewOrder);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);\n"
""));

        horizontalLayout_6->addWidget(label_7);

        lineEdit_6 = new QLineEdit(NewOrder);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        horizontalLayout_6->addWidget(lineEdit_6);

        horizontalLayout_6->setStretch(1, 39);
        horizontalLayout_6->setStretch(2, 10);
        horizontalLayout_6->setStretch(3, 4);

        gridLayout_3->addLayout(horizontalLayout_6, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_15, 0, 3, 1, 1);

        label_9 = new QLabel(NewOrder);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);"));

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_14, 0, 2, 1, 1);

        pushButton = new QPushButton(NewOrder);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(55, 55, 55);\n"
"color: rgb(219, 219, 219);"));

        gridLayout->addWidget(pushButton, 1, 3, 1, 1);

        radioButton = new QRadioButton(NewOrder);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        QFont font2;
        font2.setPointSize(8);
        radioButton->setFont(font2);

        gridLayout->addWidget(radioButton, 0, 1, 1, 1);

        radioButton_2 = new QRadioButton(NewOrder);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setFont(font2);

        gridLayout->addWidget(radioButton_2, 1, 1, 1, 1);

        gridLayout->setColumnStretch(1, 10);

        verticalLayout->addLayout(gridLayout);


        gridLayout_8->addLayout(verticalLayout, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer, 1, 1, 1, 1);

        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, lineEdit_4);
        QWidget::setTabOrder(lineEdit_4, lineEdit_5);
        QWidget::setTabOrder(lineEdit_5, lineEdit_6);
        QWidget::setTabOrder(lineEdit_6, lineEdit_7);

        retranslateUi(NewOrder);

        QMetaObject::connectSlotsByName(NewOrder);
    } // setupUi

    void retranslateUi(QDialog *NewOrder)
    {
        NewOrder->setWindowTitle(QCoreApplication::translate("NewOrder", "Dialog", nullptr));
        label_10->setText(QCoreApplication::translate("NewOrder", "Add New Order", nullptr));
        label_2->setText(QCoreApplication::translate("NewOrder", "Product Id                ", nullptr));
        label_3->setText(QCoreApplication::translate("NewOrder", "Customer's Name    ", nullptr));
        label_4->setText(QCoreApplication::translate("NewOrder", "Contact no               ", nullptr));
        label_5->setText(QCoreApplication::translate("NewOrder", "Address                     ", nullptr));
        label_6->setText(QCoreApplication::translate("NewOrder", "Quoted Price           ", nullptr));
        label_8->setText(QCoreApplication::translate("NewOrder", "Delivery Date       ", nullptr));
        label_7->setText(QCoreApplication::translate("NewOrder", "Remarks", nullptr));
        label_9->setText(QCoreApplication::translate("NewOrder", "Payment method", nullptr));
        pushButton->setText(QCoreApplication::translate("NewOrder", "Add", nullptr));
        radioButton->setText(QCoreApplication::translate("NewOrder", "Cash on delivery", nullptr));
        radioButton_2->setText(QCoreApplication::translate("NewOrder", "Advanced", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewOrder: public Ui_NewOrder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWORDER_H
