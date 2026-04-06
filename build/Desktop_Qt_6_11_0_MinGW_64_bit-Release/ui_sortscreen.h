/********************************************************************************
** Form generated from reading UI file 'sortscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTSCREEN_H
#define UI_SORTSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sortScreen
{
public:
    QLabel *label;
    QComboBox *kryteriumBox;
    QComboBox *sortBox;
    QLabel *label_2;
    QPushButton *sortButton;
    QPushButton *resetButton;

    void setupUi(QWidget *sortScreen)
    {
        if (sortScreen->objectName().isEmpty())
            sortScreen->setObjectName("sortScreen");
        sortScreen->resize(1021, 201);
        label = new QLabel(sortScreen);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 151, 20));
        kryteriumBox = new QComboBox(sortScreen);
        kryteriumBox->addItem(QString());
        kryteriumBox->addItem(QString());
        kryteriumBox->addItem(QString());
        kryteriumBox->addItem(QString());
        kryteriumBox->addItem(QString());
        kryteriumBox->addItem(QString());
        kryteriumBox->addItem(QString());
        kryteriumBox->setObjectName("kryteriumBox");
        kryteriumBox->setGeometry(QRect(180, 20, 161, 28));
        sortBox = new QComboBox(sortScreen);
        sortBox->addItem(QString());
        sortBox->addItem(QString());
        sortBox->setObjectName("sortBox");
        sortBox->setGeometry(QRect(180, 70, 91, 28));
        label_2 = new QLabel(sortScreen);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 70, 151, 20));
        sortButton = new QPushButton(sortScreen);
        sortButton->setObjectName("sortButton");
        sortButton->setGeometry(QRect(360, 40, 141, 51));
        resetButton = new QPushButton(sortScreen);
        resetButton->setObjectName("resetButton");
        resetButton->setGeometry(QRect(560, 40, 141, 51));

        retranslateUi(sortScreen);

        QMetaObject::connectSlotsByName(sortScreen);
    } // setupUi

    void retranslateUi(QWidget *sortScreen)
    {
        sortScreen->setWindowTitle(QCoreApplication::translate("sortScreen", "Form", nullptr));
        label->setText(QCoreApplication::translate("sortScreen", "Kryterium sortowania", nullptr));
        kryteriumBox->setItemText(0, QCoreApplication::translate("sortScreen", "id", nullptr));
        kryteriumBox->setItemText(1, QCoreApplication::translate("sortScreen", "tytu\305\202", nullptr));
        kryteriumBox->setItemText(2, QCoreApplication::translate("sortScreen", "ocena", nullptr));
        kryteriumBox->setItemText(3, QCoreApplication::translate("sortScreen", "rok produkcji", nullptr));
        kryteriumBox->setItemText(4, QCoreApplication::translate("sortScreen", "czas trwania", nullptr));
        kryteriumBox->setItemText(5, QCoreApplication::translate("sortScreen", "re\305\274yser", nullptr));
        kryteriumBox->setItemText(6, QCoreApplication::translate("sortScreen", "gatunek", nullptr));

        sortBox->setItemText(0, QCoreApplication::translate("sortScreen", "rosn\304\205co", nullptr));
        sortBox->setItemText(1, QCoreApplication::translate("sortScreen", "malej\304\205co", nullptr));

        label_2->setText(QCoreApplication::translate("sortScreen", "Spos\303\263b sortowania", nullptr));
        sortButton->setText(QCoreApplication::translate("sortScreen", "Sortuj", nullptr));
        resetButton->setText(QCoreApplication::translate("sortScreen", "Resetuj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sortScreen: public Ui_sortScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTSCREEN_H
