#include "editprojectview.h"
#include "ui_editprojectview.h"
#include "project.h"
#include "editprojectcontrol.h"
#include <QDebug>

EditProjectView::EditProjectView(EditProjectControl &control, QWidget *parent)
    : QDialog(parent), _control(control), ui(new Ui::EditProjectView)
{
    QPalette palette;
    palette.setBrush(this->backgroundRole(), QBrush(QImage(":Images/project")));

    this->setPalette(palette);
    ui->setupUi(this);
    ui->createBtn->setVisible(false);
    ui->updateBtn->setVisible(true);
}

EditProjectView::~EditProjectView() {}

void EditProjectView::on_updateBtn_clicked() {
    _control.editProject(ui->projectNameLE->text(),
                         ui->projectDescription->toPlainText(),
                         ui->minTeamSizeLE->text().toInt(),
                         ui->maxTeamSizeLE->text().toInt());
}

void EditProjectView::refreshProjectSettings(const Project& project) {
    ui->minTeamSizeLE->setText(QString::number(project.getMinTeamSize()));
    ui->maxTeamSizeLE->setText(QString::number(project.getMaxTeamSize()));
    ui->projectNameLE->setText(project.getName());
    ui->projectDescription->document()->setPlainText(
                project.getDescription());
}

void EditProjectView::on_cancelButton_clicked() {
    _control.cancel();
}
