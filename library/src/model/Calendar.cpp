//
// Created by student on 15.06.23.
//

#include "model/Calendar.h"

bool Calendar::accept() {
    return false;
}

bool Calendar::checkAvailable() {
    return false;
}

std::vector<std::string> Calendar::getAccepted() {
    return std::vector<std::string>();
}

std::vector<std::string> Calendar::getPending() {
    return std::vector<std::string>();
}

bool Calendar::reject() {
    return false;
}

bool Calendar::cancel() {
    return false;
}
