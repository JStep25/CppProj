/********************************************************************************
** Form generated from reading UI file 'deletescreen.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETESCREEN_H
#define UI_DELETESCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deleteScreen
{
public:
    QLineEdit *idEdit;
    QLabel *label;
    QPushButton *deleteButton;

    void setupUi(QWidget *deleteScreen)
    {
        if (deleteScreen->objectName().isEmpty())
            deleteScreen->setObjectName("deleteScreen");
        deleteScreen->resize(1021, 201);
        idEdit = new QLineEdit(deleteScreen);
        idEdit->setObjectName("idEdit");
        idEdit->setGeometry(QRect(100, 10, 191, 28));
        label = new QLabel(deleteScreen);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 91, 20));
        deleteButton = new QPushButton(deleteScreen);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setGeometry(QRect(130, 60, 141, 51));

        retranslateUi(deleteScreen);

        QMetaObject::connectSlotsByName(deleteScreen);
    } // setupUi

    void retranslateUi(QWidget *deleteScreen)
    {
        deleteScreen->setWindowTitle(QCoreApplication::translate("deleteScreen", "Form", nullptr));
        label->setText(QCoreApplication::translate("deleteScreen", "ID filmu", nullptr));
        deleteButton->setText(QCoreApplication::translate("deleteScreen", "Usu\305\204 film", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteScreen: public Ui_deleteScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETESCREEN_H
