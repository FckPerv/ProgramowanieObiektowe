//
// Created by student on 15.06.23.
//

#ifndef CARRENTAL_STUDENT_H
#define CARRENTAL_STUDENT_H

#include "typedefs.h"
#include <string>

class Student {
private:
    std::string name;
    std::string lastName;
    std::string personalId;
    SubscriptionPtr sub;

public:
    Student(const string &name, const string &lastName, const string &personalId, const SubscriptionPtr sub);

    void setName(const std::string &name);

    void setLastName(const std::string &lastName);

    void setPersonalId(const std::string &personalId);

    const std::string &getName() const;

    const std::string &getLastName() const;

    const std::string &getPersonalId() const;

    const std::string info() const;
};




#endif //CARRENTAL_STUDENT_H
