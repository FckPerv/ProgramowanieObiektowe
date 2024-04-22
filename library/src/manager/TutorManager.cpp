//
// Created by Tutor on 15.06.23.
//

#include "manager/TutorManager.h"
//
// Created by Tutor on 15.06.23.
//

#include "manager/TutorManager.h"
#include "model/Tutor.h"



void TutorManager::unregisterTutor(TutorPtr stu) {
    for(int i =0; i< repository.findAll().size();i++)
    {
        if(repository.get(i)==stu)
        {
            repository.erase(stu);
        }
    }
}

TutorPtr TutorManager::getTutor(string personalId) {
    return repository.findByPersonalId(personalId);
}



std::vector<TutorPtr> TutorManager::findAllTutors() {
    return repository.findAll();
}

TutorPtr TutorManager::registerTutor(const string &name, const string &lastName, const string &personalName,
                                     const string &degree, float basePrice) {
    TutorPtr stu = make_shared<Tutor>(name, lastName, personalName, degree, basePrice);
    repository.add(stu);
    return stu;
}

std::vector<TutorPtr> TutorManager::findTutors(StudentPredicate pred) {
    return std::vector<TutorPtr>();
}
