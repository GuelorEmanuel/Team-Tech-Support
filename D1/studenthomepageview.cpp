#include "studenthomepageview.h"
#include "ui_studenthomepageview.h"

studenthomepageview::studenthomepageview(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::studenthomepageview)
{
    ui->setupUi(this);
}

studenthomepageview::~studenthomepageview()
{
    delete ui;
}
