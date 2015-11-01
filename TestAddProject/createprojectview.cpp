#include "createprojectview.h"
#include "ui_createprojectview.h"
#include "createprojectcontrol.h"

CreateProjectView::CreateProjectView(CreateProjectControl &control,
                                     QWidget *parent) :
    QDialog(parent),
    _control(control),
    ui(new Ui::CreateProjectView)
{
    ui->setupUi(this);
    ui->createBtn->setVisible(true);
    ui->updateBtn->setVisible(false);
}

CreateProjectView::~CreateProjectView() {
}

void CreateProjectView::on_createBtn_clicked() {    
    _control.createProject(ui->projectNameLE->text(),
                           ui->projectDescriptionLE->toPlainText(),
                           ui->minTeamSizeLE->text().toInt(),
                           ui->maxTeamSizeLE->text().toInt());
}
