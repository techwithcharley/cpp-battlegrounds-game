/********************************************************************************
** Form generated from reading UI file 'BattlegroundsGUI.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATTLEGROUNDSGUI_H
#define UI_BATTLEGROUNDSGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BattlegroundsGUIClass
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QFrame *line;
    QSpacerItem *verticalSpacer_2;
    QPushButton *startButton;
    QSpacerItem *verticalSpacer_3;
    QPushButton *settingsButton;
    QPushButton *quitButton;

    void setupUi(QWidget *BattlegroundsGUIClass)
    {
        if (BattlegroundsGUIClass->objectName().isEmpty())
            BattlegroundsGUIClass->setObjectName(QStringLiteral("BattlegroundsGUIClass"));
        BattlegroundsGUIClass->resize(600, 600);
        BattlegroundsGUIClass->setMinimumSize(QSize(600, 600));
        BattlegroundsGUIClass->setMaximumSize(QSize(600, 600));
        BattlegroundsGUIClass->setSizeIncrement(QSize(0, 0));
        verticalLayout = new QVBoxLayout(BattlegroundsGUIClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 69, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(BattlegroundsGUIClass);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        font.setPointSize(30);
        label->setFont(font);

        verticalLayout->addWidget(label);

        line = new QFrame(BattlegroundsGUIClass);
        line->setObjectName(QStringLiteral("line"));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setWeight(50);
        line->setFont(font1);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        verticalSpacer_2 = new QSpacerItem(20, 69, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        startButton = new QPushButton(BattlegroundsGUIClass);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setFont(font);

        verticalLayout->addWidget(startButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        settingsButton = new QPushButton(BattlegroundsGUIClass);
        settingsButton->setObjectName(QStringLiteral("settingsButton"));

        verticalLayout->addWidget(settingsButton);

        quitButton = new QPushButton(BattlegroundsGUIClass);
        quitButton->setObjectName(QStringLiteral("quitButton"));

        verticalLayout->addWidget(quitButton);


        retranslateUi(BattlegroundsGUIClass);
        QObject::connect(quitButton, SIGNAL(clicked()), BattlegroundsGUIClass, SLOT(close()));
        QObject::connect(settingsButton, SIGNAL(clicked()), settingsButton, SLOT(show()));
        QObject::connect(startButton, SIGNAL(clicked()), startButton, SLOT(show()));
        QObject::connect(startButton, SIGNAL(clicked()), BattlegroundsGUIClass, SLOT(close()));

        QMetaObject::connectSlotsByName(BattlegroundsGUIClass);
    } // setupUi

    void retranslateUi(QWidget *BattlegroundsGUIClass)
    {
        BattlegroundsGUIClass->setWindowTitle(QApplication::translate("BattlegroundsGUIClass", "BattlegroundsGUI", nullptr));
        label->setText(QApplication::translate("BattlegroundsGUIClass", "Welcome To Battlegrounds", nullptr));
        startButton->setText(QApplication::translate("BattlegroundsGUIClass", "Start", nullptr));
        settingsButton->setText(QApplication::translate("BattlegroundsGUIClass", "Settings", nullptr));
        quitButton->setText(QApplication::translate("BattlegroundsGUIClass", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BattlegroundsGUIClass: public Ui_BattlegroundsGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTLEGROUNDSGUI_H
