//
// Created by Александр Широков on 25.02.2024.
//

// You may need to build the project (run Qt uic code generator) to get "ui_TV_REMOTE_CONTROL.h" resolved

#include "tv_remote_control.h"
#include "ui_TV_REMOTE_CONTROL.h"
#include <iostream>
#include <QTimer>



TV_REMOTE_CONTROL::TV_REMOTE_CONTROL(QWidget *parent) :
        QWidget(parent), ui(new Ui::TV_REMOTE_CONTROL) {
    ui->setupUi(this);

}

TV_REMOTE_CONTROL::~TV_REMOTE_CONTROL() {
    delete ui;
}

void TV_REMOTE_CONTROL::push0() {
    setChnl(0);
    ui->lineEdit->setText(QString::number(getChnl())+"-Chn.");
}

void TV_REMOTE_CONTROL::push1() {
    setChnl(1);
    ui->lineEdit->setText(QString::number(getChnl())+"-Chn.");
}

void TV_REMOTE_CONTROL::push2() {
    setChnl(2);
    ui->lineEdit->setText(QString::number(getChnl())+"-Chn.");
}

void TV_REMOTE_CONTROL::push3() {
    setChnl(3);
    ui->lineEdit->setText(QString::number(getChnl())+"-Chn.");
}

void TV_REMOTE_CONTROL::push4() {
    setChnl(4);
    ui->lineEdit->setText(QString::number(getChnl())+"-Chn.");
}

void TV_REMOTE_CONTROL::push5() {
    setChnl(5);
    ui->lineEdit->setText(QString::number(getChnl())+"-Chn.");
}

void TV_REMOTE_CONTROL::push6() {
    setChnl(6);
    ui->lineEdit->setText(QString::number(getChnl())+"-Chn.");
}

void TV_REMOTE_CONTROL::push7() {
    setChnl(7);
    ui->lineEdit->setText(QString::number(getChnl())+"-Chn.");
}

void TV_REMOTE_CONTROL::push8() {
    setChnl(8);
    ui->lineEdit->setText(QString::number(getChnl())+"-Chn.");
}

void TV_REMOTE_CONTROL::push9() {
    setChnl(9);
    ui->lineEdit->setText(QString::number(getChnl())+"-Chn.");
}

void TV_REMOTE_CONTROL::pushChUp() {
    setChnl(curChnl+1,'t');
    ui->lineEdit->setText(QString::number(getChnl())+"-Chn.");
}

void TV_REMOTE_CONTROL::pushChDwn() {
    setChnl(curChnl-1,'t');
    ui->lineEdit->setText(QString::number(getChnl())+"-Chn.");
}

void TV_REMOTE_CONTROL::pushVolUp() {
    setVol(curVol+10, 'u');
}

void TV_REMOTE_CONTROL::pushVolDwn() {
    setVol(curVol-10, 'd');
}

void TV_REMOTE_CONTROL::setChnl(const int &chanel , const char &t) {
    if (t=='t' && curChnl>=0 && curChnl<=9) {
        curChnl=chanel;
        std::cout << curChnl;
    }
    else curChnl=chanel;
}

void TV_REMOTE_CONTROL::setVol(const int &volume, const char &t) {
if (curVol-volume>=0 && curVol+volume<=100 ) {
    curVol=volume;
    ui->lineEdit->setText(QString::number(getVol())+"-VOL.");
    QTimer::singleShot(1000, [this](){
        ui->lineEdit->setText(QString::number(getChnl())+"-Chn.");
        std::cout<<getVol()<<std::endl;
    });
} else std::cout << "ErrVol.";

}

int TV_REMOTE_CONTROL::getChnl() {
    return curChnl;
}

int TV_REMOTE_CONTROL::getVol() {
    return curVol;
}




