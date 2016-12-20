#include <QApplication>
#include "dialog.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    FindDialog *dialog = new FindDialog;
//    dialog->show();
    DoutDialog *dialog = new DoutDialog;
    dialog->show();
    return a.exec();
}


