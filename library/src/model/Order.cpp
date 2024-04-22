//
// Created by student on 15.06.23.
//

#include "model/Order.h"
#include "model/Tutor.h"
#include <string>


Order::Order(float price, const string &subject, int hours, const pt::ptime &date, const TutorPtr &tutor,
             const StudentPtr &student) : price(price), subject(subject), hours(hours), date(date), tutor(tutor),
                                          student(student) {}
float Order::getPrice() const {
    return price;
}

const std::string &Order::getSubject() const {
    return subject;
}

int Order::getHours() const {
    return hours;
}

const pt::ptime &Order::getDate() const {
    return date;
}

const std::string &Order::getStatus() const {
    return status;
}

void Order::setStatus(const std::string &status) {
    Order::status = status;
}

const std::string Order::info() const{
    return "Subject: "+ Order::getSubject() +"\nTutor: " + tutor->info()+"\nDate: "+to_simple_string(Order::getDate())+"\nHours: "+std::to_string(Order::getHours())+"\nPrice: "+std::to_string(Order::getPrice());
}

const TutorPtr &Order::getTutor() const {
    return tutor;
}

const StudentPtr &Order::getStudent() const {
    return student;
}


