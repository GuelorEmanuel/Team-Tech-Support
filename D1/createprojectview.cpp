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
    QString name = ui->projectNameLE->text();
    QString minSize = ui->minTeamSizeLE->text();
    QString maxSize = ui->maxTeamSizeLE->text();
    QString desc = ui->projectDescriptionLE->toPlainText();
    int stat = 1;

    //Check if all of the fields have been filled
    if(name.isEmpty()) {
        qDebug() << "Empty name";
        stat = 0;
    }

    if(minSize.isEmpty()) {
        qDebug() << "Empty min size field";
        stat = 0;
    }

    if(maxSize.isEmpty()) {
        qDebug() << "Empty max size field";
        stat = 0;
    }

    if(desc.isEmpty()) {
        qDebug() << "Empty description";
        stat = 0;
    }

    if(stat != 0) {
        int min = minSize.toInt();
        int max = maxSize.toInt();

        _control.createProject(name, desc, min, max);
    }
}
