#include "editprojectview.h"
#include "ui_editprojectview.h"
#include "project.h"
#include <QDebug>

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

void EditProjectView::refreshProjectSettings(const Project& project) {
    ui->minTeamSizeLE->setText(QString::number(project.getMinTeamSize()));
    ui->maxTeamSizeLE->setText(QString::number(project.getMaxTeamSize()));
    ui->projectNameLE->setText(project.getName());
    ui->projectDescription->document()->setPlainText(
                project.getDescription());
}
