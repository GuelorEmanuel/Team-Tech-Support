#include "studentprojectview.h"
#include "ui_studentprojectview.h"

StudentProjectView::StudentProjectView(StudentProjectControl &control, QWidget *parent ) :
    QDialog(parent),
    _control(control),
    ui(new Ui::StudentProjectView)
{
    ui->setupUi(this);
}

StudentProjectView::~StudentProjectView()
{

}

void StudentProjectView::on_leaveProjectBtn_clicked()
{

}

void StudentProjectView::on_joinProjectBtn_clicked()
{


}

void StudentProjectView::refreshProjectSettings(const Project& project) {

    ui->projectNameLbl->setText(project.getName());
    ui->projectDescriptTb->setText(project.getDescription());
}
