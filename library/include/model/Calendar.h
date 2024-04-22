//
// Created by student on 15.06.23.
//

#ifndef CARRENTAL_CALENDAR_H
#define CARRENTAL_CALENDAR_H


#include <string>
#include <vector>

class Calendar {
private:
public:

    bool accept();

    bool checkAvailable();

    std::vector<std::string> getAccepted();

    std::vector<std::string> getPending();

    bool reject();

    bool cancel();

};


#endif //CARRENTAL_CALENDAR_H
