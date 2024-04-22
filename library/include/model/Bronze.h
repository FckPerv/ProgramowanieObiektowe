//
// Created by student on 15.06.23.
//

#ifndef CARRENTAL_BRONZE_H
#define CARRENTAL_BRONZE_H


#include "Subscription.h"

class Bronze: public Subscription {
public:
    float applyDiscout(float price) override;
    std::string getSubscriptionType() override;

};


#endif //CARRENTAL_BRONZE_H
