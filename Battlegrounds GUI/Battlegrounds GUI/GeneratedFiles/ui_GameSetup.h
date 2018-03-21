/********************************************************************************
** Form generated from reading UI file 'GameSetup.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMESETUP_H
#define UI_GAMESETUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_GameSetup
{
public:
    QRadioButton *multiPlayerButton;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label;
    QPushButton *acceptButton;
    QSlider *mapSizeSlider;
    QFrame *line;
    QSlider *difficultySlider;
    QLabel *label_7;
    QLabel *label_4;
    QRadioButton *singlePlayerButton;
    QLabel *label_8;

    void setupUi(QDialog *GameSetup)
    {
        if (GameSetup->objectName().isEmpty())
            GameSetup->setObjectName(QStringLiteral("GameSetup"));
        GameSetup->resize(600, 600);
        GameSetup->setMinimumSize(QSize(600, 600));
        GameSetup->setMaximumSize(QSize(600, 600));
        multiPlayerButton = new QRadioButton(GameSetup);
        multiPlayerButton->setObjectName(QStringLiteral("multiPlayerButton"));
        multiPlayerButton->setGeometry(QRect(330, 120, 121, 21));
        QFont font;
        font.setPointSize(12);
        multiPlayerButton->setFont(font);
        label_10 = new QLabel(GameSetup);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(370, 330, 31, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("Century Gothic"));
        label_10->setFont(font1);
        label_9 = new QLabel(GameSetup);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(280, 330, 51, 16));
        label_9->setFont(font1);
        label_2 = new QLabel(GameSetup);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 110, 101, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Century Gothic"));
        font2.setPointSize(16);
        label_2->setFont(font2);
        label_6 = new QLabel(GameSetup);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(290, 200, 31, 16));
        label_6->setFont(font1);
        label_3 = new QLabel(GameSetup);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 220, 131, 31));
        label_3->setFont(font2);
        label_5 = new QLabel(GameSetup);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(210, 200, 31, 16));
        label_5->setFont(font1);
        label = new QLabel(GameSetup);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 201, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("Century Gothic"));
        font3.setPointSize(25);
        label->setFont(font3);
        acceptButton = new QPushButton(GameSetup);
        acceptButton->setObjectName(QStringLiteral("acceptButton"));
        acceptButton->setGeometry(QRect(464, 542, 111, 41));
        mapSizeSlider = new QSlider(GameSetup);
        mapSizeSlider->setObjectName(QStringLiteral("mapSizeSlider"));
        mapSizeSlider->setGeometry(QRect(220, 230, 160, 22));
        mapSizeSlider->setMinimum(1);
        mapSizeSlider->setMaximum(3);
        mapSizeSlider->setOrientation(Qt::Horizontal);
        line = new QFrame(GameSetup);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 50, 201, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        difficultySlider = new QSlider(GameSetup);
        difficultySlider->setObjectName(QStringLiteral("difficultySlider"));
        difficultySlider->setGeometry(QRect(220, 360, 160, 22));
        difficultySlider->setMinimum(1);
        difficultySlider->setMaximum(3);
        difficultySlider->setOrientation(Qt::Horizontal);
        label_7 = new QLabel(GameSetup);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(370, 200, 31, 16));
        label_7->setFont(font1);
        label_4 = new QLabel(GameSetup);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 350, 121, 31));
        label_4->setFont(font2);
        singlePlayerButton = new QRadioButton(GameSetup);
        singlePlayerButton->setObjectName(QStringLiteral("singlePlayerButton"));
        singlePlayerButton->setGeometry(QRect(180, 120, 121, 21));
        singlePlayerButton->setFont(font);
        label_8 = new QLabel(GameSetup);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(210, 330, 31, 16));
        label_8->setFont(font1);

        retranslateUi(GameSetup);
        QObject::connect(acceptButton, SIGNAL(clicked()), GameSetup, SLOT(accept()));

        QMetaObject::connectSlotsByName(GameSetup);
    } // setupUi

    void retranslateUi(QDialog *GameSetup)
    {
        GameSetup->setWindowTitle(QApplication::translate("GameSetup", "GameSetup", nullptr));
        multiPlayerButton->setText(QApplication::translate("GameSetup", "Multi-player", nullptr));
        label_10->setText(QApplication::translate("GameSetup", "Hard", nullptr));
        label_9->setText(QApplication::translate("GameSetup", "Medium", nullptr));
        label_2->setText(QApplication::translate("GameSetup", "Players:", nullptr));
        label_6->setText(QApplication::translate("GameSetup", "10x10", nullptr));
        label_3->setText(QApplication::translate("GameSetup", "Map Size:", nullptr));
        label_5->setText(QApplication::translate("GameSetup", "5x5", nullptr));
        label->setText(QApplication::translate("GameSetup", "Game Setup", nullptr));
        acceptButton->setText(QApplication::translate("GameSetup", "Accept", nullptr));
        label_7->setText(QApplication::translate("GameSetup", "15x15", nullptr));
        label_4->setText(QApplication::translate("GameSetup", "Difficulty:", nullptr));
        singlePlayerButton->setText(QApplication::translate("GameSetup", "Single Player", nullptr));
        label_8->setText(QApplication::translate("GameSetup", "Easy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameSetup: public Ui_GameSetup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMESETUP_H
