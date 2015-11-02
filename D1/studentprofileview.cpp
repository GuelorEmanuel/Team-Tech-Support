#include "studentprofileview.h"
#include "ui_studentprofileview.h"


StudentProfileView::StudentProfileView(EditStuProfileControl &control, QWidget *parent):
QDialog(parent),_control(control), ui(new Ui::StudentProfileView)
{
ui->setupUi(this);
}

StudentProfileView::~StudentProfileView()
{

}

void StudentProfileView::on_exitBtn_clicked()
{

}

void StudentProfileView::on_saveBtn_clicked()
{

}
