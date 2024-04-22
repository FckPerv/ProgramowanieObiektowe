//
// Created by student on 15.06.23.
//

#include "model/Bronze.h"

float Bronze::applyDiscout(float price) {
    return price*0.05;
}

std::string Bronze::getSubscriptionType() {
    return "Bronze";
}
