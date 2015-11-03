#include "studentprofileview.h"
#include "ui_studentprofileview.h"
#include "editstuprofilecontrol.h"

StudentProfileView::StudentProfileView(EditStuProfileControl &control,QWidget *parent) :
   QDialog(parent), _control(control), ui(new Ui::StudentProfileView)
{
    ui->setupUi(this);
    ui->questionOneLbl->setText("This is a tesssssssstttttttkskdnksndksndknskdnksdnsknd\nnewLine\nAnotherNewLine");
}

StudentProfileView::~StudentProfileView()
{

}

void StudentProfileView::on_nextBtn_clicked()
{

}

void StudentProfileView::on_prevBtn_clicked()
{

}

void StudentProfileView::on_exitBtn_clicked()
{

}
