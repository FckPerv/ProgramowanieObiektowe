//
// Created by student on 15.06.23.
//

#include "manager/StudentManager.h"
#include "model/Student.h"

StudentPtr StudentManager::registerStudent(const string &name, const string &lastName, const string &personalId,
                                           SubscriptionPtr sub) {
StudentPtr stu = make_shared<Student>(name, lastName, personalId, sub);
repository.add(stu);
}

void StudentManager::unregisterStudent(StudentPtr stu) {
    for(int i =0; i<repository.findAll().size();i++)
    {
        if(repository.get(i)==stu)
        {
            repository.erase(stu);
        }
    }
}

StudentPtr StudentManager::getStudent(const std::string personalId) {
    return repository.findByPersonalId(personalId);
}

std::vector<StudentPtr> StudentManager::findStudents(StudentPredicate pred) {
    return repository.findBy(pred);
}

std::vector<StudentPtr> StudentManager::findAllStudents() {
    return repository.findAll();
}
