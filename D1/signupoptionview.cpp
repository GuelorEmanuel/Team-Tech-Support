#include "signupoptionview.h"
#include "ui_signupoptionview.h"

SignupOptionView::SignupOptionView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignupOptionView)
{
    ui->setupUi(this);
}

SignupOptionView::~SignupOptionView()
{
    delete ui;
}

void SignupOptionView::on_adminBtn_clicked()
{
    this->close();

    signupview.setModal(true);
    signupview.exec();


}

void SignupOptionView::on_studentBtn_clicked()
{

}

void SignupOptionView::on_cancelBtn_clicked()
{
 this->close();
}
