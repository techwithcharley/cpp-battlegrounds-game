/********************************************************************************
** Form generated from reading UI file 'UserTurn.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERTURN_H
#define UI_USERTURN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserTurn
{
public:
    QTableWidget *tableWidget_2;
    QFrame *line_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_4;
    QLabel *label_6;
    QLabel *label_5;
    QWidget *tab_2;
    QLabel *label_7;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;

    void setupUi(QDialog *UserTurn)
    {
        if (UserTurn->objectName().isEmpty())
            UserTurn->setObjectName(QStringLiteral("UserTurn"));
        UserTurn->resize(600, 300);
        UserTurn->setMinimumSize(QSize(600, 300));
        UserTurn->setMaximumSize(QSize(600, 300));
        tableWidget_2 = new QTableWidget(UserTurn);
        if (tableWidget_2->columnCount() < 5)
            tableWidget_2->setColumnCount(5);
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        font.setPointSize(12);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget_2->rowCount() < 5)
            tableWidget_2->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(4, __qtablewidgetitem9);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(10, 10, 341, 251));
        tableWidget_2->setMaximumSize(QSize(341, 16777215));
        tableWidget_2->setFont(font);
        tableWidget_2->setLineWidth(1);
        tableWidget_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableWidget_2->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget_2->horizontalHeader()->setDefaultSectionSize(64);
        tableWidget_2->horizontalHeader()->setMinimumSectionSize(60);
        tableWidget_2->verticalHeader()->setDefaultSectionSize(30);
        tableWidget_2->verticalHeader()->setMinimumSectionSize(25);
        tableWidget_2->verticalHeader()->setStretchLastSection(false);
        line_2 = new QFrame(UserTurn);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(360, 0, 20, 301));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        tabWidget = new QTabWidget(UserTurn);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(380, 10, 191, 241));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        lineEdit_5 = new QLineEdit(tab);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(100, 60, 41, 20));
        lineEdit_4 = new QLineEdit(tab);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(100, 100, 41, 20));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 60, 61, 21));
        label_6->setFont(font);
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 100, 81, 21));
        label_5->setFont(font);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 40, 61, 21));
        label_7->setFont(font);
        lineEdit_6 = new QLineEdit(tab_2);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(110, 40, 41, 20));
        tabWidget->addTab(tab_2, QString());
        pushButton_2 = new QPushButton(UserTurn);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(380, 260, 91, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Century Gothic"));
        font1.setPointSize(14);
        pushButton_2->setFont(font1);
        pushButton_3 = new QPushButton(UserTurn);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(140, 270, 81, 21));
        pushButton_3->setFont(font);
        pushButton = new QPushButton(UserTurn);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(480, 260, 91, 31));
        pushButton->setFont(font1);

        retranslateUi(UserTurn);
        QObject::connect(pushButton_3, SIGNAL(clicked()), UserTurn, SLOT(accept()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(UserTurn);
    } // setupUi

    void retranslateUi(QDialog *UserTurn)
    {
        UserTurn->setWindowTitle(QApplication::translate("UserTurn", "UserTurn", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("UserTurn", "A", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("UserTurn", "B", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("UserTurn", "C", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("UserTurn", "D", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("UserTurn", "E", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("UserTurn", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("UserTurn", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("UserTurn", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("UserTurn", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->verticalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("UserTurn", "5", nullptr));
        label_6->setText(QApplication::translate("UserTurn", "Unit:", nullptr));
        label_5->setText(QApplication::translate("UserTurn", "Move to:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("UserTurn", "Move", nullptr));
        label_7->setText(QApplication::translate("UserTurn", "Target:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("UserTurn", "Fire", nullptr));
        pushButton_2->setText(QApplication::translate("UserTurn", "Confirm", nullptr));
        pushButton_3->setText(QApplication::translate("UserTurn", "Concede", nullptr));
        pushButton->setText(QApplication::translate("UserTurn", "End Turn", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserTurn: public Ui_UserTurn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERTURN_H
