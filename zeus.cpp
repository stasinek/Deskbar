#include "core.h"
#include "zeus.h"
#include "ui_zeus.h"

TZeus_form::TZeus_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TZeus_form)
{
    ui->setupUi(this);
}

TZeus_form::~TZeus_form()
{
    delete ui;
}
