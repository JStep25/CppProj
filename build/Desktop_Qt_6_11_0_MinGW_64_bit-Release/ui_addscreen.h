/********************************************************************************
** Form generated from reading UI file 'addscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSCREEN_H
#define UI_ADDSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addScreen
{
public:
    QLabel *label_3;
    QPushButton *addMovieButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *titleEdit;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *directorEdit;
    QLabel *label_7;
    QComboBox *genreBox;
    QDoubleSpinBox *scoreBox;
    QSpinBox *yearBox;
    QSpinBox *lengthBox;

    void setupUi(QWidget *addScreen)
    {
        if (addScreen->objectName().isEmpty())
            addScreen->setObjectName("addScreen");
        addScreen->resize(1021, 201);
        label_3 = new QLabel(addScreen);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 200, 63, 20));
        addMovieButton = new QPushButton(addScreen);
        addMovieButton->setObjectName("addMovieButton");
        addMovieButton->setGeometry(QRect(720, 70, 161, 61));
        label = new QLabel(addScreen);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 20, 91, 20));
        label_2 = new QLabel(addScreen);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 50, 91, 20));
        titleEdit = new QLineEdit(addScreen);
        titleEdit->setObjectName("titleEdit");
        titleEdit->setGeometry(QRect(170, 10, 191, 28));
        label_4 = new QLabel(addScreen);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 90, 121, 20));
        label_5 = new QLabel(addScreen);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 130, 101, 20));
        label_6 = new QLabel(addScreen);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 170, 101, 20));
        directorEdit = new QLineEdit(addScreen);
        directorEdit->setObjectName("directorEdit");
        directorEdit->setGeometry(QRect(170, 170, 191, 28));
        label_7 = new QLabel(addScreen);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(390, 10, 101, 20));
        genreBox = new QComboBox(addScreen);
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
        genreBox->setGeometry(QRect(460, 10, 161, 28));
        scoreBox = new QDoubleSpinBox(addScreen);
        scoreBox->setObjectName("scoreBox");
        scoreBox->setGeometry(QRect(170, 50, 191, 29));
        scoreBox->setMaximum(10.000000000000000);
        scoreBox->setSingleStep(0.010000000000000);
        yearBox = new QSpinBox(addScreen);
        yearBox->setObjectName("yearBox");
        yearBox->setGeometry(QRect(170, 90, 191, 29));
        yearBox->setMaximum(2026);
        lengthBox = new QSpinBox(addScreen);
        lengthBox->setObjectName("lengthBox");
        lengthBox->setGeometry(QRect(170, 130, 191, 29));
        lengthBox->setMaximum(1000);

        retranslateUi(addScreen);

        QMetaObject::connectSlotsByName(addScreen);
    } // setupUi

    void retranslateUi(QWidget *addScreen)
    {
        addScreen->setWindowTitle(QCoreApplication::translate("addScreen", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("addScreen", "add", nullptr));
        addMovieButton->setText(QCoreApplication::translate("addScreen", "Dodaj film", nullptr));
        label->setText(QCoreApplication::translate("addScreen", "Tytu\305\202", nullptr));
        label_2->setText(QCoreApplication::translate("addScreen", "Ocena", nullptr));
        label_4->setText(QCoreApplication::translate("addScreen", "Rok produkcji", nullptr));
        label_5->setText(QCoreApplication::translate("addScreen", "Czas trwania", nullptr));
        label_6->setText(QCoreApplication::translate("addScreen", "Re\305\274yser", nullptr));
        label_7->setText(QCoreApplication::translate("addScreen", "Gatunek:", nullptr));
        genreBox->setItemText(0, QCoreApplication::translate("addScreen", "Action", nullptr));
        genreBox->setItemText(1, QCoreApplication::translate("addScreen", "Comedy", nullptr));
        genreBox->setItemText(2, QCoreApplication::translate("addScreen", "Drama", nullptr));
        genreBox->setItemText(3, QCoreApplication::translate("addScreen", "Sci-Fi", nullptr));
        genreBox->setItemText(4, QCoreApplication::translate("addScreen", "Horror", nullptr));
        genreBox->setItemText(5, QCoreApplication::translate("addScreen", "Thriller", nullptr));
        genreBox->setItemText(6, QCoreApplication::translate("addScreen", "Fantasy", nullptr));
        genreBox->setItemText(7, QCoreApplication::translate("addScreen", "Documentary", nullptr));
        genreBox->setItemText(8, QCoreApplication::translate("addScreen", "Animation", nullptr));
        genreBox->setItemText(9, QCoreApplication::translate("addScreen", "Crime", nullptr));
        genreBox->setItemText(10, QCoreApplication::translate("addScreen", "Romance", nullptr));
        genreBox->setItemText(11, QCoreApplication::translate("addScreen", "Mystery", nullptr));

    } // retranslateUi

};

namespace Ui {
    class addScreen: public Ui_addScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSCREEN_H
