#include "core.h"
#include "size.h"
#include "ui_size.h"

TSize_form::TSize_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TSize_form)
{
    ui->setupUi(this);
}

TSize_form::~TSize_form()
{
    delete ui;
}
