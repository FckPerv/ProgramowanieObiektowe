//
// Created by student on 15.06.23.
//

#ifndef CARRENTAL_ORDER_H
#define CARRENTAL_ORDER_H
#include <iostream>
#include <boost/date_time.hpp>
#include "typedefs.h"

namespace pt=boost::posix_time;

class Order {
public:
    Order(float price, const string &subject, int hours, const pt::ptime &date, const TutorPtr &tutor,
          const StudentPtr &student);

    float getPrice() const;

    const std::string &getSubject() const;

    int getHours() const;

    const pt::ptime &getDate() const;

    const std::string &getStatus() const;

    void setStatus(const std::string &status);

    const std::string info() const;

    const TutorPtr &getTutor() const;

    const StudentPtr &getStudent() const;

private:
    float price;
    std::string subject;
    int hours;
    pt::ptime date;
    std::string status;
    TutorPtr tutor;
    StudentPtr student;
};


#endif //CARRENTAL_ORDER_H
