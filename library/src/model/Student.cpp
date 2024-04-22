//
// Created by student on 15.06.23.
//

#include "model/Student.h"
#include "model/Subscription.h"
const std::string &Student::getName() const {
    return name;
}

const std::string &Student::getLastName() const {
    return lastName;
}

const std::string &Student::getPersonalId() const {
    return personalId;
}

void Student::setName(const std::string &name) {
    Student::name = name;
}

void Student::setLastName(const std::string &lastName) {
    Student::lastName = lastName;
}

void Student::setPersonalId(const std::string &personalId) {
    Student::personalId = personalId;
}

const std::string Student::info() const {
    return "imie: "+ getName() + "\n"+ "nazwisko: "+ getLastName()+"/n"+"personalId: "+ getPersonalId() + sub->getSubscriptionType();
}

Student::Student(const string &name, const string &lastName, const string &personalId, const SubscriptionPtr sub) {

}
