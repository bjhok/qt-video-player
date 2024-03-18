#include "dialog_register.h"
#include "ui_dialog_register.h"

dialog_register::dialog_register(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dialog_register)
{
    ui->setupUi(this);
}

dialog_register::~dialog_register()
{
    delete ui;
}
