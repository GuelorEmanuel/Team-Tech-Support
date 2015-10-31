#include "createprojectview.h"
#include "ui_createprojectview.h"

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
    // _control.createProject([some fields]);
}
