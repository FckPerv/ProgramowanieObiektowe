//
// Created by Tutor on 15.06.23.
//

#ifndef CARRENTAL_TUTORMANAGER_H
#define CARRENTAL_TUTORMANAGER_H


#include <vector>
#include "typedefs.h"
#include "repo/Repository.h"

class TutorManager {
public:
    TutorPtr registerTutor(const std::string &name, const std::string &lastName, const std::string &personalName,
                           const std::string &degree, float basePrice);
    void unregisterTutor(TutorPtr stu);
    TutorPtr getTutor(std::string personalId);
    std::vector<TutorPtr> findTutors(StudentPredicate pred);
    std::vector<TutorPtr> findAllTutors();
private:
    Repository<TutorPtr> repository;

};


#endif //CARRENTAL_TUTORMANAGER_H
