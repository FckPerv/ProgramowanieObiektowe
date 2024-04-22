//
// Created by student on 15.06.23.
//

#ifndef CARRENTAL_TUTOR_H
#define CARRENTAL_TUTOR_H


#include <string>
#include <vector>

/*
<<<<<<< HEAD
class Tutor {
private:
    std::string name;
    std::string lastName;
    std::string personalId;
    std::string degree;
    float basePrice;
    std::vector<std::string>subjects;
public:
    const std::string &getName() const;

    const std::string &getLastName() const;

    const std::string &getPersonalId() const;

    const std::string &getDegree() const;

    float getBasePrice() const;

    const std::vector<std::string>&getSubjects() const;

    bool addSubject(std::string subject);

    bool removeSubject(std::string subject);

    std::string info();

    Tutor(const std::string &name, const std::string &lastName, const std::string &personalName,
          const std::string &degree, float basePrice);

public:
<<<<<<< HEAD
=======
    const std::string info() const{};
=======*/
#include <string>
#include <vector>

class Tutor {
private:
    std::string name;
    std::string lastName;
    std::string personalId;
    std::string degree;
    float basePrice;
    std::vector<std::string>subjects;
public:
    const std::string &getName() const;

    const std::string &getLastName() const;

    const std::string &getPersonalId() const;

    const std::string &getDegree() const;

    float getBasePrice() const;

    const std::vector<std::string>&getSubjects() const;

    bool addSubject(std::string subject);

    bool removeSubject(std::string subject);

    std::string info();

    Tutor(const std::string &name, const std::string &lastName, const std::string &personalName,
          const std::string &degree, float basePrice);
/*
public:
>>>>>>> origin/maksio
>>>>>>> hania*/
};


#endif //CARRENTAL_TUTOR_H
