#include "dialog_login.h"
#include "ui_dialog_login.h"
#include "dialog_register.h"

#include <QEvent>
#include <QMouseEvent>

dialog_login::dialog_login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dialog_login)
{
    ui->setupUi(this);

    ui->label_register->installEventFilter(this);
}

dialog_login::~dialog_login()
{
    delete ui;
}

bool dialog_login::eventFilter(QObject *watched, QEvent *event)
{
    \
        if (watched == ui->label_register) {

        if( auto mouse_evt = dynamic_cast<QMouseEvent*>(event) ; mouse_evt &&  mouse_evt->button() == Qt::MouseButton::LeftButton  ){
            dialog_register d;
            d.exec();

            return true;
            }
    }
    return false;
}
