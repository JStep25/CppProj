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
    QLabel *max;
    QLabel *label_14;
    QLabel *min;
    QLabel *label_15;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_16;
    QLabel *median;

    void setupUi(QWidget *statScreen)
    {
        if (statScreen->objectName().isEmpty())
            statScreen->setObjectName("statScreen");
        statScreen->resize(1021, 227);
        label = new QLabel(statScreen);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 40, 221, 20));
        directorBox = new QComboBox(statScreen);
        directorBox->setObjectName("directorBox");
        directorBox->setGeometry(QRect(810, 50, 161, 28));
        label_2 = new QLabel(statScreen);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(300, 50, 131, 20));
        label_3 = new QLabel(statScreen);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(700, 50, 121, 20));
        label_4 = new QLabel(statScreen);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(300, 90, 161, 20));
        label_5 = new QLabel(statScreen);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(690, 90, 171, 20));
        label_6 = new QLabel(statScreen);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(300, 130, 161, 20));
        label_7 = new QLabel(statScreen);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(690, 130, 171, 20));
        showButton = new QPushButton(statScreen);
        showButton->setObjectName("showButton");
        showButton->setGeometry(QRect(440, 180, 111, 31));
        avrScore = new QLabel(statScreen);
        avrScore->setObjectName("avrScore");
        avrScore->setGeometry(QRect(220, 40, 71, 20));
        avrScoreGenre = new QLabel(statScreen);
        avrScoreGenre->setObjectName("avrScoreGenre");
        avrScoreGenre->setGeometry(QRect(480, 90, 63, 20));
        genreMovieNumber = new QLabel(statScreen);
        genreMovieNumber->setObjectName("genreMovieNumber");
        genreMovieNumber->setGeometry(QRect(480, 130, 63, 20));
        avrScoreDirect = new QLabel(statScreen);
        avrScoreDirect->setObjectName("avrScoreDirect");
        avrScoreDirect->setGeometry(QRect(880, 90, 63, 20));
        directMovieNumber = new QLabel(statScreen);
        directMovieNumber->setObjectName("directMovieNumber");
        directMovieNumber->setGeometry(QRect(880, 130, 63, 20));
        label_13 = new QLabel(statScreen);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 70, 181, 20));
        avrLength = new QLabel(statScreen);
        avrLength->setObjectName("avrLength");
        avrLength->setGeometry(QRect(220, 70, 71, 20));
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
        genreBox->setGeometry(QRect(410, 50, 161, 28));
        max = new QLabel(statScreen);
        max->setObjectName("max");
        max->setGeometry(QRect(220, 100, 71, 20));
        label_14 = new QLabel(statScreen);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(10, 100, 181, 20));
        min = new QLabel(statScreen);
        min->setObjectName("min");
        min->setGeometry(QRect(220, 130, 71, 20));
        label_15 = new QLabel(statScreen);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 130, 181, 20));
        label_8 = new QLabel(statScreen);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(70, 10, 221, 21));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_8->setFont(font);
        label_9 = new QLabel(statScreen);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(310, 10, 221, 20));
        label_9->setFont(font);
        label_10 = new QLabel(statScreen);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(700, 10, 221, 20));
        label_10->setFont(font);
        label_16 = new QLabel(statScreen);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(10, 160, 181, 20));
        median = new QLabel(statScreen);
        median->setObjectName("median");
        median->setGeometry(QRect(220, 160, 71, 20));

        retranslateUi(statScreen);

        QMetaObject::connectSlotsByName(statScreen);
    } // setupUi

    void retranslateUi(QWidget *statScreen)
    {
        statScreen->setWindowTitle(QCoreApplication::translate("statScreen", "Form", nullptr));
        label->setText(QCoreApplication::translate("statScreen", "\305\232rednia ocen wszystkich film\303\263w:", nullptr));
        label_2->setText(QCoreApplication::translate("statScreen", "Wybierz gatunek:", nullptr));
        label_3->setText(QCoreApplication::translate("statScreen", "Wybierz re\305\274ysera:", nullptr));
        label_4->setText(QCoreApplication::translate("statScreen", "\305\232rednia ocena gatunku:", nullptr));
        label_5->setText(QCoreApplication::translate("statScreen", "\305\232rednia ocena fim\303\263w re\305\274ysera :", nullptr));
        label_6->setText(QCoreApplication::translate("statScreen", "Liczba film\303\263w gatunku:", nullptr));
        label_7->setText(QCoreApplication::translate("statScreen", "Liczba film\303\263w re\305\274ysera:", nullptr));
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

        max->setText(QString());
        label_14->setText(QCoreApplication::translate("statScreen", "Najwy\305\274sza ocena filmu:", nullptr));
        min->setText(QString());
        label_15->setText(QCoreApplication::translate("statScreen", "Najni\305\274sza ocena filmu:", nullptr));
        label_8->setText(QCoreApplication::translate("statScreen", "Statystyki globalne:", nullptr));
        label_9->setText(QCoreApplication::translate("statScreen", "Statystyki gatunku:", nullptr));
        label_10->setText(QCoreApplication::translate("statScreen", "Statystyki re\305\274ysera:", nullptr));
        label_16->setText(QCoreApplication::translate("statScreen", "Mediana ocen:", nullptr));
        median->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class statScreen: public Ui_statScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATSCREEN_H
