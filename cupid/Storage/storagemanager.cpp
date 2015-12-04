#include "storagemanager.h"

StorageManager* StorageManager::_instance = NULL;

StorageManager::StorageManager()
{

}

static StorageManager* StorageManager::instance() {
    if (_instance == NULL) {
        _instance = new StorageManager();
    }

    return _instance;
}

std::vector<Student&>& StorageManager::listProjectStudents(Project& project) {
    //std::shared_ptr<std::vector<Student*>
    //int SqliteDatabase::getStudentsInProject(Project& project, std::vector<Student*> list)
}

std::shared_ptr<StudentList> getStudentsInProject(std::shared_ptr<Project>) {

}
