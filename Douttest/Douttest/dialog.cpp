#include "dialog.h"

DoutDialog::DoutDialog(QWidget *parent)
    :QDialog(parent)
{
    setupUi(this);
    bool a = connect(lineEdit,SIGNAL(textChanged(QString)),this,SLOT(Dout()));
}
void DoutDialog::Dout()
{
    //this->reject();
    DoutLabel->setText(lineEdit->text());
}
