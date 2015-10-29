#ifndef SIGNUPOPTIONVIEW_H
#define SIGNUPOPTIONVIEW_H

#include <QWidget>

namespace Ui {
class signupoptionview;
}

class signupoptionview : public QWidget
{
    Q_OBJECT

public:
    explicit signupoptionview(QWidget *parent = 0);
    ~signupoptionview();

private slots:
    void on_adminOptionBtn_clicked();

    void on_studentOptionBtn_clicked();

    void on_cancelBtn_clicked();

private:
    Ui::signupoptionview *ui;
};

#endif // SIGNUPOPTIONVIEW_H
