#include "storagemanager.h"

StorageManager::StorageManager(){
}
StorageManager::~StorageManager(){
}
int StorageManager::createStudent(Student &student){

}
void StorageManager::getStudent(Student &student){

}
int StorageManager::createAdmin(Admin &admin){

}

Admin StorageManager::getAdmin(int id){

}
User StorageManager::getUser(int id){

}
bool StorageManager::userExists(QString name){

}
int StorageManager::editProfile(Profile &profile){

}
Profile StorageManager::getProfile(int id){

}
int StorageManager::createProject(Project &project){

}
int StorageManager::editProject(Project &project){

}

std::vector<Project> & StorageManager::listProjects(){

}
std::vector<Project> & StorageManager::listJoinedProjects(Project &project){

}
std::vector<Project> &StorageManager::listUnjoinedProjects(Student &student){

}
int StorageManager::joinProject(Project &project, Student &student){

}



