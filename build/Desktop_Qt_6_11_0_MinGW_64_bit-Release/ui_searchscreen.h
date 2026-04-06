/********************************************************************************
** Form generated from reading UI file 'searchscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHSCREEN_H
#define UI_SEARCHSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_searchScreen
{
public:
    QLabel *label;
    QPushButton *searchButton;
    QLabel *label_2;
    QLineEdit *searchEdit;
    QPushButton *resetButton;

    void setupUi(QWidget *searchScreen)
    {
        if (searchScreen->objectName().isEmpty())
            searchScreen->setObjectName("searchScreen");
        searchScreen->resize(1021, 201);
        label = new QLabel(searchScreen);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 120, 63, 20));
        searchButton = new QPushButton(searchScreen);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(170, 60, 141, 51));
        label_2 = new QLabel(searchScreen);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 10, 101, 20));
        searchEdit = new QLineEdit(searchScreen);
        searchEdit->setObjectName("searchEdit");
        searchEdit->setGeometry(QRect(120, 10, 191, 28));
        resetButton = new QPushButton(searchScreen);
        resetButton->setObjectName("resetButton");
        resetButton->setGeometry(QRect(340, 60, 141, 51));

        retranslateUi(searchScreen);

        QMetaObject::connectSlotsByName(searchScreen);
    } // setupUi

    void retranslateUi(QWidget *searchScreen)
    {
        searchScreen->setWindowTitle(QCoreApplication::translate("searchScreen", "Form", nullptr));
        label->setText(QString());
        searchButton->setText(QCoreApplication::translate("searchScreen", "Szukaj", nullptr));
        label_2->setText(QCoreApplication::translate("searchScreen", "Nazwa filmu", nullptr));
        resetButton->setText(QCoreApplication::translate("searchScreen", "Wyczy\305\233\304\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class searchScreen: public Ui_searchScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHSCREEN_H
