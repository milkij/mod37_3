#include <QApplication>
#include "tv_remote_control.h"
#include "ui_TV_REMOTE_CONTROL.h"
#include <QFile>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);


    TV_REMOTE_CONTROL remoteControl(nullptr);
    Ui::TV_REMOTE_CONTROL _remoteControl;
    //_remoteControl.setupUi(&remoteControl);
    //remoteControl.lineEdit = _remoteControl.lineEdit;
    remoteControl.resize(240,680);
    remoteControl.show();
    return QApplication::exec();
}
