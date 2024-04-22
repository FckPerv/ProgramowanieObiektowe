//
// Created by student on 15.06.23.
//

#ifndef CARRENTAL_SILVER_H
#define CARRENTAL_SILVER_H


#include <string>
#include "Subscription.h"

class Silver: public Subscription {
public:
    float applyDiscout(float price) override;
    std::string getSubscriptionType() override;
};


#endif //CARRENTAL_SILVER_H
