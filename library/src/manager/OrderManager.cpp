//
// Created by Order on 21.06.23.
//

#include <boost/date_time/posix_time/ptime.hpp>
#include "manager/OrderManager.h"
#include <iostream>
namespace pt=boost::posix_time;
/*<<<<<<< HEAD


OrderPtr OrderManager::registerOrder(float price, const string &subject, int hours, const pt::ptime &date, const TutorPtr &tutor,
                                     const StudentPtr &student) {
    OrderPtr stu = std::make_shared<Order>(price, subject, hours, date, tutor, student);
    repository.add(stu);
    return stu;
}
//=======



//>>>>>>> origin/maksio
*/
void OrderManager::unregisterOrder(OrderPtr stu) {
    for(int i =0; i<repository.findAll().size();i++)
    {
        if(repository.get(i)==stu)
        {
            repository.erase(stu);
        }
    }
}

std::vector<OrderPtr> OrderManager::findOrders(OrderPredicate pred) {
    return repository.findBy(pred);
}

std::vector<OrderPtr> OrderManager::findAllOrders() {
    return repository.findAll();
}

OrderPtr
OrderManager::registerOrder(float price, const string &subject, int hours, const pt::ptime &date, const TutorPtr &tutor,
                            const StudentPtr &student) {
    OrderPtr stu = make_shared<Order>(price, subject, hours, date, tutor,student);
    repository.add(stu);
    return stu;
}
