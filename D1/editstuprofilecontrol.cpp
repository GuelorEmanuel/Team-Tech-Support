#include "editstuprofilecontrol.h"
#include "database.h"
#include <QDebug>



EditStuProfileControl::EditStuProfileControl(int projectId) :
  _view(*this), _profile(new Profile)
{
    qDebug() << "In contructorrrrr";

  _profile->setId(projectId);
  //loadProfiletSettings(projectId);
  _view.setModal(true);
  _view.exec();
}
EditStuProfileControl::~EditStuProfileControl() {}

void EditStuProfileControl::loadProfileSettings(int id) {
    qDebug() << "Getting profile settings";
    QSqlQuery qry(Database::getInstance().db());
    qry.prepare("SELECT * FROM profile WHERE id = :id");
    qry.bindValue(":id", id);

    if (!qry.exec()) {
        qDebug() << qry.lastError();
        return; // TODO: displaying error message to user
    } else {
        if (!qry.first()) {
            qDebug() << "Project id not found";
            return; // TODO: displaying error message to user
        }

        while (qry.next()) {
            qDebug() << "Found project " << qry.value(1).toString();
            //_view.addProject(qry.value(0).toInt(), qry.value(1).toString());
        }
    }


}



