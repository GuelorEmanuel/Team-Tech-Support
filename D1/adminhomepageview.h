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

private slots:
    void on_studentBtn_clicked();

    void on_studentInProjectBtn_clicked();

    void on_signOutBtn_clicked();

    void on_addNewProjectBtn_clicked();

    void on_HomeBtn_clicked();

private:
    Ui::adminhomepageview *ui;
};

#endif // ADMINHOMEPAGEVIEW_H
