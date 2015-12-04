#include "loginwindow.h"
#include "logincontrol.h"
#include "ui_loginwindow.h"
#include "Storage/admin.h"
#include "Storage/student.h"
#include "Storage/profile.h"
#include "Storage/project.h"
#include "Storage/qualification.h"
#include <vector>
#include "Database/sqlitedatabase.h"

LoginWindow::LoginWindow(LoginControl& control, QWidget *parent) :
    QMainWindow(parent), _control(control), ui(new Ui::LoginWindow) {
    //mainWindowControl = new MainWindowControl();
    QPalette palette;
    palette.setBrush(this->backgroundRole(), QBrush(QImage(":Images/loginScreenIMG")));

    this->setPalette(palette);
    ui->setupUi(this);

   /* Admin admin, admin1;
    Student student, student1;
    Project project, project1;
    Profile profile, profile1;
    std::vector<Project*> projects, projects1;
    std::vector<Student*> students;


    admin.setUserName("adminadmin");
    admin.setDisplayName("Admin Admin");

    student.setUserName("studentstudent");
    student.setDisplayName("Student Student");
    student.setStudentId("100900500");


    project.setName("Test project");
    project.setMinTeamSize(1);
    project.setMaxTeamSize(5);
    project.setDescription("This is a test project");


    SqliteDatabase database;
    database.createAdmin(admin);
    database.createStudent(student);
    database.createProject(project);

    student1.setId(student.getId());
    admin1.setId(admin.getId());
    project1.setId(project.getId());

    database.getAdmin(admin1);
    database.getStudent(student1);
    database.getProject(project1);

    qDebug() << QString(" Admin %1 %2 %3").arg(admin1.getId()).arg(admin1.getUserName()).arg(admin1.getDisplayName());
    qDebug() << QString(" Student %1 %2 %3").arg(student1.getId()).arg(student1.getUserName()).arg(student1.getStudentId());
    qDebug() << QString(" Project %1 %2 %3").arg(project1.getId()).arg(project1.getMinTeamSize()).arg(project1.getName());

    profile.setStuId(student1.getId());
    for(int i = 0; i < 28; i++) {
        profile.addQualification(5, 5, 5);
    }

    database.createProfile(profile);
    profile1.setId(profile.getId());

    database.getProfile(profile1);
    std::vector<Qualification> quals = profile1.getQualifications();
    qDebug() << QString(" Profile %1 %2 %3").arg(profile1.getId()).arg(profile1.getStuId()).arg(quals[0].getAnswer());

    project1.setDescription("New desc");
    project1.setName("New name");
    project1.setMaxTeamSize(8);

    profile1.editQualification(0, 4, 4, 4);

    database.editProfile(profile1);
    database.editProject(project1);

    qDebug() << QString(" Project %1 %2 %3").arg(project1.getId()).arg(project1.getMinTeamSize()).arg(project1.getName());
    qDebug() << QString(" Profile %1 %2 %3").arg(profile1.getId()).arg(profile1.getStuId()).arg(quals[0].getAnswer());

    database.addStudentToProject(student1.getId(), project1.getId());

    database.getJoinedProjectList(student1, projects);
    database.getUnjoinedProjectList(student1, projects1);

    std::vector<Project*>::iterator citer;

    //for(citer = projects.begin(); citer < projects.end(); citer++) {
      //  qDebug() << QString("Project %1 %2").arg(citer->getId()).arg(citer->getName());
    }*/
    //qDebug() << QString("Project %1 %2").arg(projects1[0]->getId()).arg(projects1[0]->getName());
    //database.getStudentsInProject(project1, students);



}

LoginWindow::~LoginWindow() {
    // Not responsible for cleaning up _control
}

void LoginWindow::on_signUpBtn_clicked() {
    _control.signUp();
}

/*Function: void MainWindow::on_signInBtn_clicked()
 * Purpose: get entered username and pass it to control class
 */
void LoginWindow::on_signInBtn_clicked() {
   QString errorMessage ="Error: Either your account doen't exist or something went really wrong, Please create an account to login.";
   int stat = _control.signIn(ui->lineEditUserName->text());
   ui->statusLbl->setWordWrap(true);
   if( stat == 0){
      ui->statusLbl->setText("<font color='red'>" +errorMessage+"</font>");
   }
}

void LoginWindow::on_lineEditUserName_returnPressed() {
    _control.signIn(ui->lineEditUserName->text());
    // TODO: move all the error handling stuff into the controller so we don't have to duplicate it
}
