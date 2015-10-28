#ifndef ADMINHOMEPAGEVIEW_H
#define ADMINHOMEPAGEVIEW_H

#include <QWidget>

namespace Ui {
class adminhomepageview;
}

class adminhomepageview : public QWidget
{
    Q_OBJECT

public:
    explicit adminhomepageview(QWidget *parent = 0);
    ~adminhomepageview();

private:
    Ui::adminhomepageview *ui;
};

#endif // ADMINHOMEPAGEVIEW_H
