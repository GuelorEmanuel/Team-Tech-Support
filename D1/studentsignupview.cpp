#include "studentsignupview.h"
#include "ui_studentsignupview.h"

studentsignupView::studentsignupView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::studentsignupView)
{
    ui->setupUi(this);
}

studentsignupView::~studentsignupView()
{
    delete ui;
}
