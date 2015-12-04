#include "student.h"

Student::~Student() {
}

Student::Student() : Student(-1) {

}

Student::Student(int id) : User(id) {

}
