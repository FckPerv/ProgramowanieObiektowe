//
// Created by student on 15.06.23.
//

#ifndef CARRENTAL_STUDENTMANAGER_H
#define CARRENTAL_STUDENTMANAGER_H

#include <vector>
#include "typedefs.h"
#include "repo/Repository.h"

class StudentManager {
public:
    StudentPtr registerStudent(const std::string &name, const std::string &lastName, const std::string &personalId, SubscriptionPtr sub);
    void unregisterStudent(StudentPtr stu);
    StudentPtr getStudent(std::string personalId);
    std::vector<StudentPtr> findStudents(StudentPredicate pred);
    std::vector<StudentPtr> findAllStudents();
private:
    Repository<StudentPtr> repository;

};


#endif //CARRENTAL_STUDENTMANAGER_H
