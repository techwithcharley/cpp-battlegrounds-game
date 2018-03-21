/********************************************************************************
** Form generated from reading UI file 'UnitPlacement.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNITPLACEMENT_H
#define UI_UNITPLACEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_UnitPlacement
{
public:
    QLabel *label;
    QPushButton *confirmButton;
    QLineEdit *shipEdit;
    QLabel *label_3;
    QPushButton *concedeButton;
    QLineEdit *planeEdit;
    QFrame *line;
    QTableWidget *tableWidget;
    QLabel *label_2;
    QLabel *label_4;
    QLineEdit *squadEdit;

    void setupUi(QDialog *UnitPlacement)
    {
        if (UnitPlacement->objectName().isEmpty())
            UnitPlacement->setObjectName(QStringLiteral("UnitPlacement"));
        UnitPlacement->resize(600, 300);
        UnitPlacement->setMinimumSize(QSize(600, 300));
        UnitPlacement->setMaximumSize(QSize(600, 300));
        label = new QLabel(UnitPlacement);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(410, 20, 121, 21));
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        font.setPointSize(16);
        label->setFont(font);
        confirmButton = new QPushButton(UnitPlacement);
        confirmButton->setObjectName(QStringLiteral("confirmButton"));
        confirmButton->setGeometry(QRect(390, 260, 91, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Century Gothic"));
        font1.setPointSize(14);
        confirmButton->setFont(font1);
        shipEdit = new QLineEdit(UnitPlacement);
        shipEdit->setObjectName(QStringLiteral("shipEdit"));
        shipEdit->setGeometry(QRect(490, 130, 41, 20));
        label_3 = new QLabel(UnitPlacement);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(410, 130, 61, 21));
        QFont font2;
        font2.setFamily(QStringLiteral("Century Gothic"));
        font2.setPointSize(12);
        label_3->setFont(font2);
        concedeButton = new QPushButton(UnitPlacement);
        concedeButton->setObjectName(QStringLiteral("concedeButton"));
        concedeButton->setGeometry(QRect(130, 270, 81, 21));
        concedeButton->setFont(font2);
        planeEdit = new QLineEdit(UnitPlacement);
        planeEdit->setObjectName(QStringLiteral("planeEdit"));
        planeEdit->setGeometry(QRect(490, 170, 41, 20));
        line = new QFrame(UnitPlacement);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(363, 0, 20, 301));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        tableWidget = new QTableWidget(UnitPlacement);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font2);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 5)
            tableWidget->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem9);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 341, 251));
        tableWidget->setMaximumSize(QSize(341, 16777215));
        tableWidget->setFont(font2);
        tableWidget->setLineWidth(1);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget->horizontalHeader()->setDefaultSectionSize(64);
        tableWidget->horizontalHeader()->setMinimumSectionSize(60);
        tableWidget->verticalHeader()->setDefaultSectionSize(30);
        tableWidget->verticalHeader()->setMinimumSectionSize(25);
        tableWidget->verticalHeader()->setStretchLastSection(false);
        label_2 = new QLabel(UnitPlacement);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(410, 90, 61, 21));
        label_2->setFont(font2);
        label_4 = new QLabel(UnitPlacement);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(410, 170, 61, 21));
        label_4->setFont(font2);
        squadEdit = new QLineEdit(UnitPlacement);
        squadEdit->setObjectName(QStringLiteral("squadEdit"));
        squadEdit->setGeometry(QRect(490, 90, 41, 20));

        retranslateUi(UnitPlacement);
        QObject::connect(concedeButton, SIGNAL(clicked()), UnitPlacement, SLOT(accept()));
        QObject::connect(confirmButton, SIGNAL(clicked()), UnitPlacement, SLOT(exec()));
        QObject::connect(confirmButton, SIGNAL(clicked()), UnitPlacement, SLOT(accept()));

        QMetaObject::connectSlotsByName(UnitPlacement);
    } // setupUi

    void retranslateUi(QDialog *UnitPlacement)
    {
        UnitPlacement->setWindowTitle(QApplication::translate("UnitPlacement", "UnitPlacement", nullptr));
        label->setText(QApplication::translate("UnitPlacement", "Place Units:", nullptr));
        confirmButton->setText(QApplication::translate("UnitPlacement", "Confirm", nullptr));
        label_3->setText(QApplication::translate("UnitPlacement", "Ship:", nullptr));
        concedeButton->setText(QApplication::translate("UnitPlacement", "Concede", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("UnitPlacement", "A", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("UnitPlacement", "B", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("UnitPlacement", "C", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("UnitPlacement", "D", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("UnitPlacement", "E", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("UnitPlacement", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("UnitPlacement", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("UnitPlacement", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("UnitPlacement", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("UnitPlacement", "5", nullptr));
        label_2->setText(QApplication::translate("UnitPlacement", "Squad:", nullptr));
        label_4->setText(QApplication::translate("UnitPlacement", "Plane:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UnitPlacement: public Ui_UnitPlacement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNITPLACEMENT_H
