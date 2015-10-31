#include "editprojectview.h"
#include "ui_editprojectview.h"

EditProjectView::EditProjectView(EditProjectControl &control, QWidget *parent)
    : QDialog(parent), _control(control), ui(new Ui::EditProjectView)
{
    ui->setupUi(this);
    ui->createBtn->setVisible(false);
    ui->updateBtn->setVisible(true);
}

EditProjectView::~EditProjectView() {}

void EditProjectView::on_updateBtn_clicked() {
    // _control.createProject([some fields]);
}
