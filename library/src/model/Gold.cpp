//
// Created by student on 15.06.23.
//

#include "model/Gold.h"

float Gold::applyDiscout(float price) {
    return price*0.2;
}

std::string Gold::getSubscriptionType() {
    return "Gold";
}
