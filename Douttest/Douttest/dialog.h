#pragma once

#include <QDialog>

#include "ui_untitled.h"

//asda
class DoutDialog: public QDialog, public Ui::Dialog
{
    Q_OBJECT
public:
    DoutDialog(QWidget *parent = 0);
private slots:
    void Dout();
};

