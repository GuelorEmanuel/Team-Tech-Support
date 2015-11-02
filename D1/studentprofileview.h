#ifndef STUDENTPROFILEVIEW_H
#define STUDENTPROFILEVIEW_H

#include <QDialog>
#include <memory>
#include "studentprofileview.h"

class EditStuProfileControl;

namespace Ui {
class StudentProfileView;
}

class StudentProfileView : public QDialog
{
    Q_OBJECT

public:
    explicit StudentProfileView(EditStuProfileControl &control, QWidget *parent = 0);
    ~StudentProfileView();

private slots:
    void on_exitBtn_clicked();

    void on_saveBtn_clicked();

private:
    std::auto_ptr<Ui::StudentProfileView> ui;
    EditStuProfileControl &_control;
};

#endif // STUDENTPROFILEVIEW_H
