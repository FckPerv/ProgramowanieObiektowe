//
// Created by student on 15.06.23.
//

#ifndef CARRENTAL_STUDENTREPO_H
#define CARRENTAL_STUDENTREPO_H
#include <typedefs.h>
#include <iostream>
#include <vector>

class StudentRepo {
public:
    void add(StudentPtr student);
    const StudentPtr get(const int &index) const;
    void erase(const StudentPtr student);
    std::vector<StudentPtr> findBy(StudentPredicate predicate);
    std::vector<StudentPtr> findAll();
    StudentPtr findByPersonalId(const std::string &personalId);
private:
    std::vector<StudentPtr> students;
};


#endif //CARRENTAL_STUDENTREPO_H
