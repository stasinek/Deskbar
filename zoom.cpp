#include "zoom.h"
#include "ui_zoom.h"

TZoom_form::TZoom_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TZoom_form)
{
    ui->setupUi(this);
}

TZoom_form::~TZoom_form()
{
    delete ui;
}
