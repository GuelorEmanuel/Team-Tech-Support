#include "manageprojectwindow.h"
#include "ui_manageprojectwindow.h"
#include "manageprojectcontrol.h"


ManageProjectWindow::ManageProjectWindow(ManageProjectControl &control,
                                     QWidget *parent) :
    QDialog(parent),
    _control(control),
    ui(new Ui::ManageProjectWindow)
{
    ui->setupUi(this);
}

ManageProjectWindow::~ManageProjectWindow() {
}

void ManageProjectWindow::displayError(QString msg) {
    ui->statusLbl->setText("<font color=\"red\">" + msg + "</font>");
}

void ManageProjectWindow::on_cancelButton_clicked() {
    _control.cancel();
}

/*Function: void CreateProjectView::on_createBtn_clicked()
 * Purpose: take information from user and pass it to control
 *          class
 */
void ManageProjectWindow::on_createBtn_clicked() {
    _control.createProject(ui->projectNameLE->text(),
                           ui->projectDescriptionLE->toPlainText(),
                           ui->minTeamSizeLE->text(),
                           ui->maxTeamSizeLE->text());
}
