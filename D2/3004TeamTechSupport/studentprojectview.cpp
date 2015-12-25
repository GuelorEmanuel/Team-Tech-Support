#include "studentprojectview.h"
#include "ui_studentprojectview.h"

#include <studentprojectcontrol.h>

StudentProjectView::StudentProjectView(StudentProjectControl &control, QWidget *parent ) :
    QDialog(parent),
    _control(control),
    ui(new Ui::StudentProjectView)
{
    QPalette palette;
    palette.setBrush(this->backgroundRole(), QBrush(QImage(":Images/project")));

    this->setPalette(palette);
    ui->setupUi(this);
}

StudentProjectView::~StudentProjectView()
{

}

void StudentProjectView::on_leaveProjectBtn_clicked()
{
    _control.leaveProject();
}

void StudentProjectView::on_joinProjectBtn_clicked()
{
    if (_control.joinProject() == 0) {
        ui->statusLbl->setWordWrap(true);
        ui->statusLbl->setText("<font color='red'>Error: Please try joining project again</font>");
    }
}

void StudentProjectView::refreshProjectSettings(const Project& project) {

    ui->projectNameLbl->setText(project.getName());
    ui->projectDescriptTb->setText(project.getDescription());
}
