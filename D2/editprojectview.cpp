#include "editprojectview.h"
#include "ui_editprojectview.h"
#include "project.h"
#include "editprojectcontrol.h"
#include <QDebug>

EditProjectView::EditProjectView(EditProjectControl &control, QWidget *parent)
    : QDialog(parent), _control(control), ui(new Ui::EditProjectView)
{
    ui->setupUi(this);
}

EditProjectView::~EditProjectView() {}

/*Function: void EditProjectView::on_updateBtn_clicked()
 * Purpose: get information from user and pass it to control class
 */
void EditProjectView::on_updateBtn_clicked() {

    ui->statusLbl->setWordWrap(true);
    //QRegExp re("\\d*");
    QString name = ui->projectNameLE->text();
    QString minSize = ui->minTeamSizeLE->text();
    QString maxSize = ui->maxTeamSizeLE->text();
    QString desc = ui->projectDescription->toPlainText();
    int stat = 1;
    bool min,max;
    int maxVal, minVal;
    maxVal = maxSize.toInt(&max,10);
    minVal = minSize.toInt(&min,10);
    qDebug()<<"min: "<<min<<"max "<<min;

    //Check if all of the fields have been filled
    if(name.isEmpty()) {
        qDebug() << "Empty name";
        ui->statusLbl->setText("<font color='red'>Please fill in project name</font>");
        stat = 0;

    }

    if(!min) {
        qDebug() << "Empty min size field";
        ui->statusLbl->setText("<font color='red'>Please fill in Min team size field must be an integer value</font>");
        stat = 0;
    }

    if(!max) {
        qDebug() << "Empty max size field";
        ui->statusLbl->setText("<font color='red'>Please fill in Max team size field must be an integer value</font>");
        stat = 0;
    }

    if(desc.isEmpty()) {
        qDebug() << "Empty description";
        ui->statusLbl->setText("<font color='red'>Please fill in description field</font>");
        stat = 0;
    }

    if(stat == 1) {
        _control.editProject(ui->projectNameLE->text(),
                             ui->projectDescription->toPlainText(),
                             ui->minTeamSizeLE->text().toInt(),
                             ui->maxTeamSizeLE->text().toInt());
    }
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
