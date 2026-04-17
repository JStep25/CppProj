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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_statScreen
{
public:
    QComboBox *directorBox;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *showButton;
    QComboBox *genreBox;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *avrScore;
    QLabel *label_13;
    QLabel *avrLength;
    QLabel *label_14;
    QLabel *max;
    QLabel *label_15;
    QLabel *min;
    QLabel *label_16;
    QLabel *median;
    QWidget *widget1;
    QGridLayout *gridLayout_2;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *avrScoreGenre;
    QLabel *maxGenre;
    QLabel *label_6;
    QLabel *minGenre;
    QLabel *label_4;
    QLabel *genreMovieNumber;
    QWidget *widget2;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QLabel *avrScoreDirect;
    QLabel *label_7;
    QLabel *directMovieNumber;
    QLabel *label_20;
    QLabel *maxDirect;
    QLabel *label_19;
    QLabel *minDirect;

    void setupUi(QWidget *statScreen)
    {
        if (statScreen->objectName().isEmpty())
            statScreen->setObjectName("statScreen");
        statScreen->resize(1021, 272);
        directorBox = new QComboBox(statScreen);
        directorBox->setObjectName("directorBox");
        directorBox->setGeometry(QRect(770, 50, 181, 24));
        label_2 = new QLabel(statScreen);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(307, 50, 91, 16));
        label_3 = new QLabel(statScreen);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(666, 50, 90, 16));
        showButton = new QPushButton(statScreen);
        showButton->setObjectName("showButton");
        showButton->setGeometry(QRect(400, 220, 101, 31));
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
        genreBox->setGeometry(QRect(410, 50, 101, 24));
        label_8 = new QLabel(statScreen);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 20, 151, 21));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_8->setFont(font);
        label_9 = new QLabel(statScreen);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(310, 10, 147, 21));
        label_9->setFont(font);
        label_10 = new QLabel(statScreen);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(660, 11, 146, 21));
        label_10->setFont(font);
        widget = new QWidget(statScreen);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 80, 261, 106));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        avrScore = new QLabel(widget);
        avrScore->setObjectName("avrScore");

        gridLayout->addWidget(avrScore, 0, 1, 1, 1);

        label_13 = new QLabel(widget);
        label_13->setObjectName("label_13");

        gridLayout->addWidget(label_13, 1, 0, 1, 1);

        avrLength = new QLabel(widget);
        avrLength->setObjectName("avrLength");

        gridLayout->addWidget(avrLength, 1, 1, 1, 1);

        label_14 = new QLabel(widget);
        label_14->setObjectName("label_14");

        gridLayout->addWidget(label_14, 2, 0, 1, 1);

        max = new QLabel(widget);
        max->setObjectName("max");

        gridLayout->addWidget(max, 2, 1, 1, 1);

        label_15 = new QLabel(widget);
        label_15->setObjectName("label_15");

        gridLayout->addWidget(label_15, 3, 0, 1, 1);

        min = new QLabel(widget);
        min->setObjectName("min");

        gridLayout->addWidget(min, 3, 1, 1, 1);

        label_16 = new QLabel(widget);
        label_16->setObjectName("label_16");

        gridLayout->addWidget(label_16, 4, 0, 1, 1);

        median = new QLabel(widget);
        median->setObjectName("median");

        gridLayout->addWidget(median, 4, 1, 1, 1);

        widget1 = new QWidget(statScreen);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(310, 80, 271, 111));
        gridLayout_2 = new QGridLayout(widget1);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(widget1);
        label_17->setObjectName("label_17");

        gridLayout_2->addWidget(label_17, 2, 0, 1, 1);

        label_18 = new QLabel(widget1);
        label_18->setObjectName("label_18");

        gridLayout_2->addWidget(label_18, 3, 0, 1, 1);

        avrScoreGenre = new QLabel(widget1);
        avrScoreGenre->setObjectName("avrScoreGenre");

        gridLayout_2->addWidget(avrScoreGenre, 0, 1, 1, 1);

        maxGenre = new QLabel(widget1);
        maxGenre->setObjectName("maxGenre");

        gridLayout_2->addWidget(maxGenre, 2, 1, 1, 1);

        label_6 = new QLabel(widget1);
        label_6->setObjectName("label_6");

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        minGenre = new QLabel(widget1);
        minGenre->setObjectName("minGenre");

        gridLayout_2->addWidget(minGenre, 3, 1, 1, 1);

        label_4 = new QLabel(widget1);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        genreMovieNumber = new QLabel(widget1);
        genreMovieNumber->setObjectName("genreMovieNumber");

        gridLayout_2->addWidget(genreMovieNumber, 1, 1, 1, 1);

        widget2 = new QWidget(statScreen);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(660, 80, 311, 121));
        gridLayout_3 = new QGridLayout(widget2);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget2);
        label_5->setObjectName("label_5");

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        avrScoreDirect = new QLabel(widget2);
        avrScoreDirect->setObjectName("avrScoreDirect");

        gridLayout_3->addWidget(avrScoreDirect, 0, 1, 1, 1);

        label_7 = new QLabel(widget2);
        label_7->setObjectName("label_7");

        gridLayout_3->addWidget(label_7, 1, 0, 1, 1);

        directMovieNumber = new QLabel(widget2);
        directMovieNumber->setObjectName("directMovieNumber");

        gridLayout_3->addWidget(directMovieNumber, 1, 1, 1, 1);

        label_20 = new QLabel(widget2);
        label_20->setObjectName("label_20");

        gridLayout_3->addWidget(label_20, 2, 0, 1, 1);

        maxDirect = new QLabel(widget2);
        maxDirect->setObjectName("maxDirect");

        gridLayout_3->addWidget(maxDirect, 2, 1, 1, 1);

        label_19 = new QLabel(widget2);
        label_19->setObjectName("label_19");

        gridLayout_3->addWidget(label_19, 3, 0, 1, 1);

        minDirect = new QLabel(widget2);
        minDirect->setObjectName("minDirect");

        gridLayout_3->addWidget(minDirect, 3, 1, 1, 1);


        retranslateUi(statScreen);

        QMetaObject::connectSlotsByName(statScreen);
    } // setupUi

    void retranslateUi(QWidget *statScreen)
    {
        statScreen->setWindowTitle(QCoreApplication::translate("statScreen", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("statScreen", "Wybierz gatunek:", nullptr));
        label_3->setText(QCoreApplication::translate("statScreen", "Wybierz re\305\274ysera:", nullptr));
        showButton->setText(QCoreApplication::translate("statScreen", "Od\305\233wie\305\274", nullptr));
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

        label_8->setText(QCoreApplication::translate("statScreen", "Statystyki globalne:", nullptr));
        label_9->setText(QCoreApplication::translate("statScreen", "Statystyki gatunku:", nullptr));
        label_10->setText(QCoreApplication::translate("statScreen", "Statystyki re\305\274ysera:", nullptr));
        label->setText(QCoreApplication::translate("statScreen", "\305\232rednia ocen wszystkich film\303\263w:", nullptr));
        avrScore->setText(QString());
        label_13->setText(QCoreApplication::translate("statScreen", "\305\232redni czas trwania filmu: ", nullptr));
        avrLength->setText(QString());
        label_14->setText(QCoreApplication::translate("statScreen", "Najwy\305\274sza ocena filmu:", nullptr));
        max->setText(QString());
        label_15->setText(QCoreApplication::translate("statScreen", "Najni\305\274sza ocena filmu:", nullptr));
        min->setText(QString());
        label_16->setText(QCoreApplication::translate("statScreen", "Mediana ocen:", nullptr));
        median->setText(QString());
        label_17->setText(QCoreApplication::translate("statScreen", "Najwy\305\274sza ocena filmu:", nullptr));
        label_18->setText(QCoreApplication::translate("statScreen", "Najni\305\274sza ocena filmu:", nullptr));
        avrScoreGenre->setText(QString());
        maxGenre->setText(QString());
        label_6->setText(QCoreApplication::translate("statScreen", "Liczba film\303\263w gatunku:", nullptr));
        minGenre->setText(QString());
        label_4->setText(QCoreApplication::translate("statScreen", "\305\232rednia ocena gatunku:", nullptr));
        genreMovieNumber->setText(QString());
        label_5->setText(QCoreApplication::translate("statScreen", "\305\232rednia ocena fim\303\263w re\305\274ysera :", nullptr));
        avrScoreDirect->setText(QString());
        label_7->setText(QCoreApplication::translate("statScreen", "Liczba film\303\263w re\305\274ysera:", nullptr));
        directMovieNumber->setText(QString());
        label_20->setText(QCoreApplication::translate("statScreen", "Najwy\305\274sza ocena filmu:", nullptr));
        maxDirect->setText(QString());
        label_19->setText(QCoreApplication::translate("statScreen", "Najni\305\274sza ocena filmu:", nullptr));
        minDirect->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class statScreen: public Ui_statScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATSCREEN_H
