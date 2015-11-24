#include "studenthomeview.h"
#include "ui_studenthomeview.h"

StudentHomeView::StudentHomeView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudentHomeView)
{
    ui->setupUi(this);
}

StudentHomeView::~StudentHomeView()
{
    delete ui;
}
