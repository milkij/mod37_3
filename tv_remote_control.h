//
// Created by Александр Широков on 25.02.2024.
//

#ifndef MOD37_3_TV_REMOTE_CONTROL_H
#define MOD37_3_TV_REMOTE_CONTROL_H

#include <QWidget>
#include <QPixmap>
#include <QLineEdit>


QT_BEGIN_NAMESPACE
namespace Ui { class TV_REMOTE_CONTROL; }
QT_END_NAMESPACE

class TV_REMOTE_CONTROL : public QWidget {
Q_OBJECT

public:
    explicit TV_REMOTE_CONTROL(QWidget *parent = nullptr);

    ~TV_REMOTE_CONTROL() override;

    QLineEdit lineEdit;


public slots:
    void push0();
    void push1();
    void push2();
    void push3();
    void push4();
    void push5();
    void push6();
    void push7();
    void push8();
    void push9();
    void pushChUp();
    void pushChDwn();
    void pushVolUp();
    void pushVolDwn();



private:
    Ui::TV_REMOTE_CONTROL *ui;
    int curChnl=0;
    int curVol=0;

    void setChnl(const int &chanel, const char &t='b'); // b || t
    void setVol(const int &volume, const char &t);

    int getChnl();
    int getVol();
};


#endif //MOD37_3_TV_REMOTE_CONTROL_H
