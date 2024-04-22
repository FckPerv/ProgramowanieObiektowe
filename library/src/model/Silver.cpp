//
// Created by student on 15.06.23.
//

#include "model/Silver.h"

float Silver::applyDiscout(float price) {
    return price*0.1;
}

std::string Silver::getSubscriptionType() {
    return "Silver";
}
