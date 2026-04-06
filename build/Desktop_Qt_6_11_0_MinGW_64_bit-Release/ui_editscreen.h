/********************************************************************************
** Form generated from reading UI file 'editscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSCREEN_H
#define UI_EDITSCREEN_H

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

class Ui_editScreen
{
public:
    QLabel *label;
    QLabel *label_6;
    QLabel *label_2;
    QSpinBox *yearBox;
    QLabel *label_5;
    QSpinBox *lengthBox;
    QLineEdit *titleEdit;
    QLabel *label_7;
    QLabel *label_4;
    QPushButton *editButton;
    QDoubleSpinBox *scoreBox;
    QLineEdit *directorEdit;
    QLabel *label_8;
    QSpinBox *idBox;
    QComboBox *genreBox;

    void setupUi(QWidget *editScreen)
    {
        if (editScreen->objectName().isEmpty())
            editScreen->setObjectName("editScreen");
        editScreen->resize(1021, 201);
        label = new QLabel(editScreen);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 20, 91, 20));
        label_6 = new QLabel(editScreen);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 170, 101, 20));
        label_2 = new QLabel(editScreen);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 50, 91, 20));
        yearBox = new QSpinBox(editScreen);
        yearBox->setObjectName("yearBox");
        yearBox->setGeometry(QRect(170, 90, 191, 29));
        yearBox->setMaximum(2026);
        label_5 = new QLabel(editScreen);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 130, 101, 20));
        lengthBox = new QSpinBox(editScreen);
        lengthBox->setObjectName("lengthBox");
        lengthBox->setGeometry(QRect(170, 130, 191, 29));
        lengthBox->setMaximum(1000);
        titleEdit = new QLineEdit(editScreen);
        titleEdit->setObjectName("titleEdit");
        titleEdit->setGeometry(QRect(170, 10, 191, 28));
        label_7 = new QLabel(editScreen);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(390, 10, 101, 20));
        label_4 = new QLabel(editScreen);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 90, 121, 20));
        editButton = new QPushButton(editScreen);
        editButton->setObjectName("editButton");
        editButton->setGeometry(QRect(720, 70, 161, 61));
        scoreBox = new QDoubleSpinBox(editScreen);
        scoreBox->setObjectName("scoreBox");
        scoreBox->setGeometry(QRect(170, 50, 191, 29));
        scoreBox->setMaximum(10.000000000000000);
        scoreBox->setSingleStep(0.010000000000000);
        directorEdit = new QLineEdit(editScreen);
        directorEdit->setObjectName("directorEdit");
        directorEdit->setGeometry(QRect(170, 170, 191, 28));
        label_8 = new QLabel(editScreen);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(390, 60, 121, 20));
        idBox = new QSpinBox(editScreen);
        idBox->setObjectName("idBox");
        idBox->setGeometry(QRect(460, 60, 161, 29));
        idBox->setMaximum(2026);
        genreBox = new QComboBox(editScreen);
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

        retranslateUi(editScreen);

        QMetaObject::connectSlotsByName(editScreen);
    } // setupUi

    void retranslateUi(QWidget *editScreen)
    {
        editScreen->setWindowTitle(QCoreApplication::translate("editScreen", "Form", nullptr));
        label->setText(QCoreApplication::translate("editScreen", "Tytu\305\202", nullptr));
        label_6->setText(QCoreApplication::translate("editScreen", "Re\305\274yser", nullptr));
        label_2->setText(QCoreApplication::translate("editScreen", "Ocena", nullptr));
        label_5->setText(QCoreApplication::translate("editScreen", "Czas trwania", nullptr));
        label_7->setText(QCoreApplication::translate("editScreen", "Gatunek:", nullptr));
        label_4->setText(QCoreApplication::translate("editScreen", "Rok produkcji", nullptr));
        editButton->setText(QCoreApplication::translate("editScreen", "Edytuj wpis", nullptr));
        label_8->setText(QCoreApplication::translate("editScreen", "ID filmu", nullptr));
        genreBox->setItemText(0, QCoreApplication::translate("editScreen", "Action", nullptr));
        genreBox->setItemText(1, QCoreApplication::translate("editScreen", "Comedy", nullptr));
        genreBox->setItemText(2, QCoreApplication::translate("editScreen", "Drama", nullptr));
        genreBox->setItemText(3, QCoreApplication::translate("editScreen", "Sci-Fi", nullptr));
        genreBox->setItemText(4, QCoreApplication::translate("editScreen", "Horror", nullptr));
        genreBox->setItemText(5, QCoreApplication::translate("editScreen", "Thriller", nullptr));
        genreBox->setItemText(6, QCoreApplication::translate("editScreen", "Fantasy", nullptr));
        genreBox->setItemText(7, QCoreApplication::translate("editScreen", "Documentary", nullptr));
        genreBox->setItemText(8, QCoreApplication::translate("editScreen", "Animation", nullptr));
        genreBox->setItemText(9, QCoreApplication::translate("editScreen", "Crime", nullptr));
        genreBox->setItemText(10, QCoreApplication::translate("editScreen", "Romance", nullptr));
        genreBox->setItemText(11, QCoreApplication::translate("editScreen", "Mystery", nullptr));

    } // retranslateUi

};

namespace Ui {
    class editScreen: public Ui_editScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSCREEN_H
