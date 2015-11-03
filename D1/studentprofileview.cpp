#include "editstuprofilecontrol.h"
#include "ui_studentprofileview.h"


StudentProfileView::StudentProfileView(EditStuProfileControl &control,QWidget *parent) :
   QDialog(parent), _control(control), ui(new Ui::StudentProfileView)
{
    ui->setupUi(this);
}

StudentProfileView::~StudentProfileView()
{

}
