/********************************************************************************
** Form generated from reading UI file 'DefeatScreen.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEFEATSCREEN_H
#define UI_DEFEATSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DefeatScreen
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *DefeatScreen)
    {
        if (DefeatScreen->objectName().isEmpty())
            DefeatScreen->setObjectName(QStringLiteral("DefeatScreen"));
        DefeatScreen->resize(400, 300);
        pushButton = new QPushButton(DefeatScreen);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(310, 260, 75, 23));
        label = new QLabel(DefeatScreen);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 90, 161, 41));
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        font.setPointSize(36);
        label->setFont(font);

        retranslateUi(DefeatScreen);
        QObject::connect(pushButton, SIGNAL(clicked()), DefeatScreen, SLOT(accept()));

        QMetaObject::connectSlotsByName(DefeatScreen);
    } // setupUi

    void retranslateUi(QDialog *DefeatScreen)
    {
        DefeatScreen->setWindowTitle(QApplication::translate("DefeatScreen", "DefeatScreen", nullptr));
        pushButton->setText(QApplication::translate("DefeatScreen", "Quit", nullptr));
        label->setText(QApplication::translate("DefeatScreen", "Defeat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DefeatScreen: public Ui_DefeatScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEFEATSCREEN_H
