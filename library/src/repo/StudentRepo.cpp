//
// Created by student on 15.06.23.
//

#include "repo/StudentRepo.h"
#include "model/Student.h"
void StudentRepo::add(StudentPtr student) {
    if(student != nullptr)
    {
        students.push_back(student);
    }
}

const StudentPtr StudentRepo::get(const int &index) const {
    return students[index];
}

void StudentRepo::erase(const StudentPtr student) {
    for(int i =0;i<students.size();i++)
    {
        if(students[i] == student)
        {
            students.erase(students.begin()+i);
        }
    }
}

std::vector<StudentPtr> StudentRepo::findBy(StudentPredicate predicate) {
    std::vector<StudentPtr> found;
    for (unsigned int i = 0; i < students.size(); i++) {
        StudentPtr stu = get(i);
        if (stu != nullptr && predicate(stu)) {
            found.push_back(stu);
        }
    }
    return found;
}
bool studentTrue(StudentPtr Rent) {
    return true;
}


std::vector<StudentPtr> StudentRepo::findAll() {
    return findBy(studentTrue);
}

StudentPtr StudentRepo::findByPersonalId(const string &personalId) {
    for(StudentPtr stu:students)
    {
        if(stu->getPersonalId()==personalId)
        {
            return stu;
        }
    }
}
