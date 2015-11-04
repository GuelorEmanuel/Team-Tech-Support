#include "createprojectview.h"
#include "ui_createprojectview.h"
#include "createprojectcontrol.h"


CreateProjectView::CreateProjectView(CreateProjectControl &control,
                                     QWidget *parent) :
    QDialog(parent),
    _control(control),
    ui(new Ui::CreateProjectView)
{
    QPalette palette;
    palette.setBrush(this->backgroundRole(), QBrush(QImage(":Images/project")));

    this->setPalette(palette);
    ui->setupUi(this);
    ui->createBtn->setVisible(true);
    ui->updateBtn->setVisible(false);
}

CreateProjectView::~CreateProjectView() {
}

/*Function: void CreateProjectView::on_createBtn_clicked()
 * Purpose: take information from user and pass it to control
 *          class
 */
void CreateProjectView::on_createBtn_clicked() {
    QRegExp re("\\d*");
    QString name = ui->projectNameLE->text();
    QString minSize = ui->minTeamSizeLE->text();
    QString maxSize = ui->maxTeamSizeLE->text();
    QString desc = ui->projectDescriptionLE->toPlainText();
    int stat = 1;
    bool min,max;
    int maxVal, minVal;
    maxVal = maxSize.toInt(&max,10);
    minVal = minSize.toInt(&min,10);
    qDebug()<<"min: "<<min<<"max "<<min;

    //Check if all of the fields have been filled
    if(name.isEmpty()) {
        qDebug() << "Empty name";
        stat = 0;
    }

    if(!min) {
        qDebug() << "Empty min size field";
        stat = 0;
    }

    if(!max) {
        qDebug() << "Empty max size field";
        stat = 0;
    }

    if(desc.isEmpty()) {
        qDebug() << "Empty description";
        stat = 0;
    }

    if(stat == 1) {
        int min = minSize.toInt();
        int max = maxSize.toInt();

        _control.createProject(name, desc, min, max);
    }
}
