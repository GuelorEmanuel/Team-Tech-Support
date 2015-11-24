#include "studentprofileview.h"
#include "ui_studentprofileview.h"

StudentProfileView::StudentProfileView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudentProfileView)
{
    ui->setupUi(this);
}

StudentProfileView::~StudentProfileView()
{
    delete ui;
}
