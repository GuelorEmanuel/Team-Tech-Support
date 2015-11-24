#ifndef ADMINHOMEVIEW_H
#define ADMINHOMEVIEW_H

#include <QDialog>

namespace Ui {
class AdminHomeView;
}

class AdminHomeView : public QDialog
{
    Q_OBJECT

public:
    explicit AdminHomeView(QWidget *parent = 0);
    ~AdminHomeView();

private:
    Ui::AdminHomeView *ui;
};

#endif // ADMINHOMEVIEW_H
