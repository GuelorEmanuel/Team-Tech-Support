#include "createprojectview.h"
#include "ui_createprojectview.h"
#include <createprojectcontrol.h>

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
    QString name = ui->projectNameLE->text();
    QString minSize = ui->minTeamSizeLE->text();
    QString maxSize = ui->maxTeamSizeLE->text();
    QString desc = ui->plainTextEdit->toPlainText();
    int stat = 1;

    //Check if all of the fields have been filled
    if(name.count("") == name.length()) {
        qDebug() << "Empty name";
        stat = 0;
    }

    if(minSize.count("") == minSize.length()) {
        qDebug() << "Empty min size field";
        stat = 0;
    }

    if(maxSize.count("") == maxSize.length()) {
        qDebug() << "Empty max size field";
        stat = 0;
    }

    if(desc.count("") == desc.length()) {
        qDebug() << "Empty description";
        stat = 0;
    }

    if(stat != 0) {
        int min = minSize.toInt();
        int max = maxSize.toInt();

        _control.createProject(name,desc, min, max);
    }
}
