/********************************************************************************
** Form generated from reading UI file 'newproduct.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPRODUCT_H
#define UI_NEWPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_NewProduct
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *NewProduct)
    {
        if (NewProduct->objectName().isEmpty())
            NewProduct->setObjectName(QString::fromUtf8("NewProduct"));
        NewProduct->resize(459, 309);
        NewProduct->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);"));
        gridLayout_2 = new QGridLayout(NewProduct);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(NewProduct);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);\n"
"color: rgb(32, 42, 68);"));

        gridLayout_2->addWidget(label, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 2, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(NewProduct);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);\n"
""));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lineEdit_3 = new QLineEdit(NewProduct);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 217, 217);"));

        gridLayout->addWidget(lineEdit_3, 1, 2, 1, 1);

        label_3 = new QLabel(NewProduct);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);\n"
""));

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        lineEdit_2 = new QLineEdit(NewProduct);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 217, 217);"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        comboBox = new QComboBox(NewProduct);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setStyleSheet(QString::fromUtf8("color: rgb(239, 239, 239);"));

        gridLayout->addWidget(comboBox, 1, 3, 1, 1);

        pushButton = new QPushButton(NewProduct);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(55, 55, 55);\n"
"color: rgb(219, 219, 219);"));

        gridLayout->addWidget(pushButton, 1, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 4, 1, 1);

        label_5 = new QLabel(NewProduct);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);\n"
""));

        gridLayout->addWidget(label_5, 0, 3, 1, 1);

        label_4 = new QLabel(NewProduct);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(32, 42, 68);\n"
""));

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        lineEdit = new QLineEdit(NewProduct);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 217, 217);"));

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 4, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 3, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 3, 2, 1, 1);

        gridLayout_2->setRowStretch(0, 10);
        gridLayout_2->setRowStretch(4, 10);

        retranslateUi(NewProduct);

        QMetaObject::connectSlotsByName(NewProduct);
    } // setupUi

    void retranslateUi(QDialog *NewProduct)
    {
        NewProduct->setWindowTitle(QCoreApplication::translate("NewProduct", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("NewProduct", "Add Product", nullptr));
        label_2->setText(QCoreApplication::translate("NewProduct", "Product Id", nullptr));
        label_3->setText(QCoreApplication::translate("NewProduct", "Product name", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("NewProduct", "1", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("NewProduct", "2", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("NewProduct", "3", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("NewProduct", "4", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("NewProduct", "5", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("NewProduct", "6", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("NewProduct", "7", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("NewProduct", "8", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("NewProduct", "9", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("NewProduct", "10", nullptr));

        pushButton->setText(QCoreApplication::translate("NewProduct", "Add", nullptr));
        label_5->setText(QCoreApplication::translate("NewProduct", "Stock", nullptr));
        label_4->setText(QCoreApplication::translate("NewProduct", "Selling price", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewProduct: public Ui_NewProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPRODUCT_H
