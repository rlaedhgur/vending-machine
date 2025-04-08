/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QLCDNumber *lcdNumber;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pb10;
    QPushButton *pbCoffee;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pb50;
    QPushButton *pbHotChocolate;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pb100;
    QPushButton *pbGoldenMilk;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pb500;
    QPushButton *pbGreenTea;
    QPushButton *pbReset;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(357, 315);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setObjectName("gridLayout");
        lcdNumber = new QLCDNumber(Widget);
        lcdNumber->setObjectName("lcdNumber");

        gridLayout->addWidget(lcdNumber, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pb10 = new QPushButton(Widget);
        pb10->setObjectName("pb10");

        horizontalLayout->addWidget(pb10);

        pbCoffee = new QPushButton(Widget);
        pbCoffee->setObjectName("pbCoffee");

        horizontalLayout->addWidget(pbCoffee);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pb50 = new QPushButton(Widget);
        pb50->setObjectName("pb50");

        horizontalLayout_2->addWidget(pb50);

        pbHotChocolate = new QPushButton(Widget);
        pbHotChocolate->setObjectName("pbHotChocolate");

        horizontalLayout_2->addWidget(pbHotChocolate);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pb100 = new QPushButton(Widget);
        pb100->setObjectName("pb100");

        horizontalLayout_3->addWidget(pb100);

        pbGoldenMilk = new QPushButton(Widget);
        pbGoldenMilk->setObjectName("pbGoldenMilk");

        horizontalLayout_3->addWidget(pbGoldenMilk);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pb500 = new QPushButton(Widget);
        pb500->setObjectName("pb500");

        horizontalLayout_4->addWidget(pb500);

        pbGreenTea = new QPushButton(Widget);
        pbGreenTea->setObjectName("pbGreenTea");

        horizontalLayout_4->addWidget(pbGreenTea);


        verticalLayout->addLayout(horizontalLayout_4);

        pbReset = new QPushButton(Widget);
        pbReset->setObjectName("pbReset");

        verticalLayout->addWidget(pbReset);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pb10->setText(QCoreApplication::translate("Widget", "10", nullptr));
        pbCoffee->setText(QCoreApplication::translate("Widget", "Coffee(100)", nullptr));
        pb50->setText(QCoreApplication::translate("Widget", "50", nullptr));
        pbHotChocolate->setText(QCoreApplication::translate("Widget", "Hot Chocolate(200)", nullptr));
        pb100->setText(QCoreApplication::translate("Widget", "100", nullptr));
        pbGoldenMilk->setText(QCoreApplication::translate("Widget", "Golden Milk(300)", nullptr));
        pb500->setText(QCoreApplication::translate("Widget", "500", nullptr));
        pbGreenTea->setText(QCoreApplication::translate("Widget", "Green Tea(400)", nullptr));
        pbReset->setText(QCoreApplication::translate("Widget", "pbRest", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
