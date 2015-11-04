#include "editprojectview.h"
#include "ui_editprojectview.h"
#include "project.h"
#include "editprojectcontrol.h"
#include <QDebug>

EditProjectView::EditProjectView(EditProjectControl &control, QWidget *parent)
    : QDialog(parent), _control(control), ui(new Ui::EditProjectView)
{
    ui->setupUi(this);
    ui->createBtn->setVisible(false);
    ui->updateBtn->setVisible(true);
}

EditProjectView::~EditProjectView() {}

/*Function: void EditProjectView::on_updateBtn_clicked()
 * Purpose: get information from user and pass it to control class
 */
void EditProjectView::on_updateBtn_clicked() {
    _control.editProject(ui->projectNameLE->text(),
                         ui->projectDescription->toPlainText(),
                         ui->minTeamSizeLE->text().toInt(),
                         ui->maxTeamSizeLE->text().toInt());
}

/*Function: void EditProjectView::refreshProjectSettings
 * Purpose: set project information received from user
 */
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
