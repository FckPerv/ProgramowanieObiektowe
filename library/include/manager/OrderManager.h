//
// Created by Order on 21.06.23.
//

#ifndef CARRENTAL_ORDERMANAGER_H
#define CARRENTAL_ORDERMANAGER_H

#include <vector>
#include <boost/date_time/posix_time/ptime.hpp>
#include "typedefs.h"
#include "repo/Repository.h"
#include "../model/Order.h"
/*<<<<<<< HEAD
#include <boost/date_time.hpp>

=======
>>>>>>> origin/maksio*/
namespace pt=boost::posix_time;

class OrderManager {
public:
    OrderPtr registerOrder(float price, const string &subject, int hours, const pt::ptime &date, const TutorPtr &tutor,
                           const StudentPtr &student);
    void unregisterOrder(OrderPtr stu);
    std::vector<OrderPtr> findOrders(OrderPredicate pred);
    std::vector<OrderPtr> findAllOrders();
private:
    Repository<OrderPtr> repository;
};


#endif //CARRENTAL_ORDERMANAGER_H
