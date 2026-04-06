/********************************************************************************
** Form generated from reading UI file 'filterscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTERSCREEN_H
#define UI_FILTERSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_filterScreen
{
public:
    QLabel *label_2;
    QPushButton *filtrButton;
    QLabel *label;
    QComboBox *directorBox;
    QLabel *label_3;
    QComboBox *genreBox;
    QPushButton *resetButton;

    void setupUi(QWidget *filterScreen)
    {
        if (filterScreen->objectName().isEmpty())
            filterScreen->setObjectName("filterScreen");
        filterScreen->resize(1021, 201);
        label_2 = new QLabel(filterScreen);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 10, 101, 20));
        filtrButton = new QPushButton(filterScreen);
        filtrButton->setObjectName("filtrButton");
        filtrButton->setGeometry(QRect(150, 130, 141, 51));
        label = new QLabel(filterScreen);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 120, 63, 20));
        directorBox = new QComboBox(filterScreen);
        directorBox->addItem(QString());
        directorBox->setObjectName("directorBox");
        directorBox->setGeometry(QRect(130, 60, 191, 28));
        label_3 = new QLabel(filterScreen);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 60, 101, 20));
        genreBox = new QComboBox(filterScreen);
        genreBox->addItem(QString());
        genreBox->addItem(QString());
        genreBox->addItem(QString());
        genreBox->addItem(QString());
        genreBox->addItem(QString());
        genreBox->addItem(QString());
        genreBox->addItem(QString());
        genreBox->addItem(QString());
        genreBox->addItem(QString());
        genreBox->addItem(QString());
        genreBox->addItem(QString());
        genreBox->addItem(QString());
        genreBox->addItem(QString());
        genreBox->setObjectName("genreBox");
        genreBox->setGeometry(QRect(130, 10, 191, 28));
        resetButton = new QPushButton(filterScreen);
        resetButton->setObjectName("resetButton");
        resetButton->setGeometry(QRect(400, 130, 141, 51));

        retranslateUi(filterScreen);

        QMetaObject::connectSlotsByName(filterScreen);
    } // setupUi

    void retranslateUi(QWidget *filterScreen)
    {
        filterScreen->setWindowTitle(QCoreApplication::translate("filterScreen", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("filterScreen", "Gatunek filmu", nullptr));
        filtrButton->setText(QCoreApplication::translate("filterScreen", "Filtruj", nullptr));
        label->setText(QString());
        directorBox->setItemText(0, QCoreApplication::translate("filterScreen", "Wszyscy re\305\274yserzy", nullptr));

        label_3->setText(QCoreApplication::translate("filterScreen", "Re\305\274yser", nullptr));
        genreBox->setItemText(0, QCoreApplication::translate("filterScreen", "Wszystkie gatunki", nullptr));
        genreBox->setItemText(1, QCoreApplication::translate("filterScreen", "Action", nullptr));
        genreBox->setItemText(2, QCoreApplication::translate("filterScreen", "Comedy", nullptr));
        genreBox->setItemText(3, QCoreApplication::translate("filterScreen", "Drama", nullptr));
        genreBox->setItemText(4, QCoreApplication::translate("filterScreen", "Sci-Fi", nullptr));
        genreBox->setItemText(5, QCoreApplication::translate("filterScreen", "Horror", nullptr));
        genreBox->setItemText(6, QCoreApplication::translate("filterScreen", "Thriller", nullptr));
        genreBox->setItemText(7, QCoreApplication::translate("filterScreen", "Fantasy", nullptr));
        genreBox->setItemText(8, QCoreApplication::translate("filterScreen", "Documentary", nullptr));
        genreBox->setItemText(9, QCoreApplication::translate("filterScreen", "Animation", nullptr));
        genreBox->setItemText(10, QCoreApplication::translate("filterScreen", "Crime", nullptr));
        genreBox->setItemText(11, QCoreApplication::translate("filterScreen", "Romance", nullptr));
        genreBox->setItemText(12, QCoreApplication::translate("filterScreen", "Mystery", nullptr));

        resetButton->setText(QCoreApplication::translate("filterScreen", "Resetuj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class filterScreen: public Ui_filterScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERSCREEN_H
