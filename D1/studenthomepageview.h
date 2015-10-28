#ifndef STUDENTHOMEPAGEVIEW_H
#define STUDENTHOMEPAGEVIEW_H

#include <QWidget>

namespace Ui {
class studenthomepageview;
}

class studenthomepageview : public QWidget
{
    Q_OBJECT

public:
    explicit studenthomepageview(QWidget *parent = 0);
    ~studenthomepageview();

private:
    Ui::studenthomepageview *ui;
};

#endif // STUDENTHOMEPAGEVIEW_H
