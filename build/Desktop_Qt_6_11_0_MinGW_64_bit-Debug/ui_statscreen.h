/********************************************************************************
** Form generated from reading UI file 'statscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATSCREEN_H
#define UI_STATSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_statScreen
{
public:
    QLabel *label;
    QComboBox *directorBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *showButton;
    QLabel *avrScore;
    QLabel *avrScoreGenre;
    QLabel *genreMovieNumber;
    QLabel *avrScoreDirect;
    QLabel *directMovieNumber;
    QLabel *label_13;
    QLabel *avrLength;
    QComboBox *genreBox;

    void setupUi(QWidget *statScreen)
    {
        if (statScreen->objectName().isEmpty())
            statScreen->setObjectName("statScreen");
        statScreen->resize(1021, 201);
        label = new QLabel(statScreen);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 60, 221, 20));
        directorBox = new QComboBox(statScreen);
        directorBox->setObjectName("directorBox");
        directorBox->setGeometry(QRect(850, 10, 161, 28));
        label_2 = new QLabel(statScreen);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(370, 10, 131, 20));
        label_3 = new QLabel(statScreen);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(720, 10, 121, 20));
        label_4 = new QLabel(statScreen);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(370, 60, 101, 20));
        label_5 = new QLabel(statScreen);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(720, 60, 101, 20));
        label_6 = new QLabel(statScreen);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(370, 100, 101, 20));
        label_7 = new QLabel(statScreen);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(720, 100, 101, 20));
        showButton = new QPushButton(statScreen);
        showButton->setObjectName("showButton");
        showButton->setGeometry(QRect(620, 140, 111, 41));
        avrScore = new QLabel(statScreen);
        avrScore->setObjectName("avrScore");
        avrScore->setGeometry(QRect(240, 60, 71, 20));
        avrScoreGenre = new QLabel(statScreen);
        avrScoreGenre->setObjectName("avrScoreGenre");
        avrScoreGenre->setGeometry(QRect(490, 60, 63, 20));
        genreMovieNumber = new QLabel(statScreen);
        genreMovieNumber->setObjectName("genreMovieNumber");
        genreMovieNumber->setGeometry(QRect(490, 100, 63, 20));
        avrScoreDirect = new QLabel(statScreen);
        avrScoreDirect->setObjectName("avrScoreDirect");
        avrScoreDirect->setGeometry(QRect(840, 60, 63, 20));
        directMovieNumber = new QLabel(statScreen);
        directMovieNumber->setObjectName("directMovieNumber");
        directMovieNumber->setGeometry(QRect(840, 100, 63, 20));
        label_13 = new QLabel(statScreen);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 100, 181, 20));
        avrLength = new QLabel(statScreen);
        avrLength->setObjectName("avrLength");
        avrLength->setGeometry(QRect(240, 100, 71, 20));
        genreBox = new QComboBox(statScreen);
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
        genreBox->setGeometry(QRect(500, 10, 161, 28));

        retranslateUi(statScreen);

        QMetaObject::connectSlotsByName(statScreen);
    } // setupUi

    void retranslateUi(QWidget *statScreen)
    {
        statScreen->setWindowTitle(QCoreApplication::translate("statScreen", "Form", nullptr));
        label->setText(QCoreApplication::translate("statScreen", "\305\232rednia ocen wszystkich film\303\263w:", nullptr));
        label_2->setText(QCoreApplication::translate("statScreen", "Wybierz gatunek:", nullptr));
        label_3->setText(QCoreApplication::translate("statScreen", "Wybierz re\305\274ysera", nullptr));
        label_4->setText(QCoreApplication::translate("statScreen", "\305\232rednia ocena:", nullptr));
        label_5->setText(QCoreApplication::translate("statScreen", "\305\232rednia ocena:", nullptr));
        label_6->setText(QCoreApplication::translate("statScreen", "Liczba film\303\263w:", nullptr));
        label_7->setText(QCoreApplication::translate("statScreen", "Liczba film\303\263w:", nullptr));
        showButton->setText(QCoreApplication::translate("statScreen", "Od\305\233wie\305\274", nullptr));
        avrScore->setText(QString());
        avrScoreGenre->setText(QString());
        genreMovieNumber->setText(QString());
        avrScoreDirect->setText(QString());
        directMovieNumber->setText(QString());
        label_13->setText(QCoreApplication::translate("statScreen", "\305\232redni czas trwania filmu: ", nullptr));
        avrLength->setText(QString());
        genreBox->setItemText(0, QCoreApplication::translate("statScreen", "Action", nullptr));
        genreBox->setItemText(1, QCoreApplication::translate("statScreen", "Comedy", nullptr));
        genreBox->setItemText(2, QCoreApplication::translate("statScreen", "Drama", nullptr));
        genreBox->setItemText(3, QCoreApplication::translate("statScreen", "Sci-Fi", nullptr));
        genreBox->setItemText(4, QCoreApplication::translate("statScreen", "Horror", nullptr));
        genreBox->setItemText(5, QCoreApplication::translate("statScreen", "Thriller", nullptr));
        genreBox->setItemText(6, QCoreApplication::translate("statScreen", "Fantasy", nullptr));
        genreBox->setItemText(7, QCoreApplication::translate("statScreen", "Documentary", nullptr));
        genreBox->setItemText(8, QCoreApplication::translate("statScreen", "Animation", nullptr));
        genreBox->setItemText(9, QCoreApplication::translate("statScreen", "Crime", nullptr));
        genreBox->setItemText(10, QCoreApplication::translate("statScreen", "Romance", nullptr));

    } // retranslateUi

};

namespace Ui {
    class statScreen: public Ui_statScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATSCREEN_H
