//
// Created by student on 15.06.23.
//

#include "model/Tutor.h"

const std::string &Tutor::getName() const {
    return name;
}

const std::string &Tutor::getLastName() const {
    return lastName;
}

const std::string &Tutor::getPersonalId() const {
    return personalId;
}

const std::string &Tutor::getDegree() const {
    return degree;
}

float Tutor::getBasePrice() const {
    return basePrice;
}

const std::vector<std::string> &Tutor::getSubjects() const {
    return subjects;
}

bool Tutor::addSubject(std::string subject) {
    for(std::string s:subjects)
    {
        if(s==subject)
        {
            return false;
        }
    }
    addSubject(subject);
    return true;
}

bool Tutor::removeSubject(std::string subject) {
    for(int i =0; i < subjects.size(); i++)
    {
        if(subjects[i]==subject)
        {
            subjects.erase(subjects.begin()+i);
            return true;
        }
    }
    return false;

}

std::string Tutor::info() {
    std::string pomoc;
    for(std::string s:subjects)
    {
        pomoc += s + "\n";
    }
    return "imie: " + getName() + "\n" + "nazwisko: " + getLastName() + "\n" + "personalId: "+ getPersonalId() + "\n"+"przedmioty: " + pomoc;
}

Tutor::Tutor(const std::string &name, const std::string &lastName, const std::string &personalId,
             const std::string &degree, float basePrice) : name(name), lastName(lastName), personalId(personalId),
                                                           degree(degree), basePrice(basePrice) {}
