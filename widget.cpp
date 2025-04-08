#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    , money(0)
{
    ui->setupUi(this);
    updateCoffeeButton();
    updateHotChocolateButton();
    updateGoldMilkButton();
    updateGreenTeaButton();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeMoney(int diff) {
    money += diff;
    ui->lcdNumber->display(money);
    updateCoffeeButton();//money update and state update
    updateHotChocolateButton();
    updateGoldMilkButton();
    updateGreenTeaButton();
}

void Widget::on_pb10_clicked()
{
    changeMoney(10);
}


void Widget::on_pb50_clicked()
{
    changeMoney(50);
}


void Widget::on_pb100_clicked()
{
    changeMoney(100);
}


void Widget::on_pb500_clicked()
{
    changeMoney(500);
}

void Widget::on_pbCoffee_clicked()
{
    if(money>=100){
        changeMoney(-100);
    }
    else{
        QMessageBox::warning(this,"false","잔액이 부족합니다.");
    }
}
void Widget::updateCoffeeButton(){
    ui->pbCoffee->setEnabled(money>=100);
}

void Widget::on_pbReset_clicked()
{
    int numCoins500 = money / 500;
    int remainder = money % 500;

    int numCoins100 = remainder / 100;
    remainder %= 100;

    int numCoins50 = remainder / 50;
    remainder %= 50;

    int numCoins10 = remainder / 10;
    remainder %= 10;
    QString message = QString("잔돈\n500원: %1개\n100원: %2개\n50원: %3개\n10원: %4개")
                          .arg(numCoins500)
                          .arg(numCoins100)
                          .arg(numCoins50)
                          .arg(numCoins10);

    QMessageBox::information(this, "잔돈", message);

    money = 0;
    ui->lcdNumber->display(money);
    updateCoffeeButton(); // 리셋 후 버튼 상태 갱신
}


void Widget::on_pbHotChocolate_clicked()
{
    if(money>=200){
        changeMoney(-200);
    }
    else{
        QMessageBox::warning(this,"false","잔액이 부족합니다.");
    }
}

void Widget::updateHotChocolateButton(){
    ui->pbHotChocolate->setEnabled(money>=200);
}

void Widget::on_pbGoldenMilk_clicked()
{
    if(money>=300){
        changeMoney(-300);
    }
    else{
        QMessageBox::warning(this,"false","잔액이 부족합니다.");
    }
}

void Widget::updateGoldMilkButton(){
    ui->pbGoldenMilk->setEnabled(money >= 300);
}

void Widget::on_pbGreenTea_clicked()
{
    if(money>=400){
        changeMoney(-400);
    }
    else{
        QMessageBox::warning(this,"false","잔액이 부족합니다.");
    }
}

void Widget::updateGreenTeaButton(){
    ui->pbGreenTea->setEnabled(money>=400);
}
