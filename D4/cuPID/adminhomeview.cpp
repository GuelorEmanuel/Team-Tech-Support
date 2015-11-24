#include "adminhomeview.h"
#include "ui_adminhomeview.h"

AdminHomeView::AdminHomeView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminHomeView)
{
    ui->setupUi(this);
}

AdminHomeView::~AdminHomeView()
{
    delete ui;
}
