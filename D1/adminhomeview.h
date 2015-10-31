#ifndef ADMINHOMEVIEW_H
#define ADMINHOMEVIEW_H

#include <QDialog>
#include <memory>
class AdminMainControl;

namespace Ui {
    class AdminHomeView;
}

class AdminHomeView : public QDialog
{
    Q_OBJECT

public:
    explicit AdminHomeView(AdminMainControl &control, QWidget *parent = 0);
    ~AdminHomeView();

private slots:

    void on_createProjectBtn_clicked();
    void on_signoutBtn_clicked();
    void on_editProjectBtn_clicked();
    void on_runAlgoBtn_clicked();

private:
    std::auto_ptr<Ui::AdminHomeView> ui;
    std::auto_ptr<QPalette> paletteBlue;
    std::auto_ptr<QPalette> paletteBlack;
    AdminMainControl& _control;
};

#endif // ADMINHOMEVIEW_H
