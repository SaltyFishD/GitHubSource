#include <QApplication>
#include "dialog.h"
//Trial
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    FindDialog *dialog = new FindDialog;
//    dialog->show();
    DoutDialog *dialog = new DoutDialog;
    dialog->show();
    return a.exec();
}

//为什么我自己都炸了
