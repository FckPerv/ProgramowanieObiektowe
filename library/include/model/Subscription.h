//
// Created by student on 15.06.23.
//

#ifndef CARRENTAL_SUBSCRIPTION_H
#define CARRENTAL_SUBSCRIPTION_H


#include <string>

class Subscription {
public:
    virtual float applyDiscout(float price)=0;
    virtual std::string getSubscriptionType()=0;
};


#endif //CARRENTAL_SUBSCRIPTION_H
