//
// Created by student on 15.06.23.
//

#ifndef CARRENTAL_GOLD_H
#define CARRENTAL_GOLD_H


#include "Subscription.h"

class Gold: public Subscription {
public:
    float applyDiscout(float price) override;
    std::string getSubscriptionType() override;
};


#endif //CARRENTAL_GOLD_H
