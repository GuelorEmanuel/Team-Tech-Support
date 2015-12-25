#ifndef SIGNUSETPROFILEVIEW_H
#define SIGNUSETPROFILEVIEW_H

#include <QWidget>

namespace Ui {
class signusetprofileview;
}

class signusetprofileview : public QWidget
{
    Q_OBJECT

public:
    explicit signusetprofileview(QWidget *parent = 0);
    ~signusetprofileview();

private:
    Ui::signusetprofileview *ui;
};

#endif // SIGNUSETPROFILEVIEW_H
