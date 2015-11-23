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
}

CreateProjectView::~CreateProjectView() {
}

void CreateProjectView::displayError(QString msg) {
    ui->statusLbl->setText("<font color=\"red\">" + msg + "</font>");
}

void CreateProjectView::on_cancelButton_clicked() {
    _control.cancel();
}

/*Function: void CreateProjectView::on_createBtn_clicked()
 * Purpose: take information from user and pass it to control
 *          class
 */
void CreateProjectView::on_createBtn_clicked() {
    _control.createProject(ui->projectNameLE->text(),
                           ui->projectDescriptionLE->toPlainText(),
                           ui->minTeamSizeLE->text(),
                           ui->maxTeamSizeLE->text());
}
