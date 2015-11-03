#ifndef STUDENTPROFILEVIEW_H
#define STUDENTPROFILEVIEW_H

#include <QDialog>
#include <memory>


class EditStuProfileControl;
namespace Ui {
class StudentProfileView;
}

class StudentProfileView : public QDialog
{
    Q_OBJECT

public:
    explicit StudentProfileView(EditStuProfileControl &control,QWidget *parent = 0);
    ~StudentProfileView();
//private slots:



private:
    EditStuProfileControl &_control;
    std::auto_ptr<Ui::StudentProfileView> ui;
};

#endif // STUDENTPROFILEVIEW_H
