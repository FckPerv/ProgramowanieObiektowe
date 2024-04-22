//
// Created by student on 15.06.23.
//

#ifndef CARRENTAL_TYPEDEFS_H
#define CARRENTAL_TYPEDEFS_H
#include <memory>
#include <ctime>

using namespace std;
class Student;
class Order;
class Subscription;
class Tutor;

typedef shared_ptr<Student> StudentPtr;
typedef shared_ptr<Order> OrderPtr;
typedef shared_ptr<Subscription> SubscriptionPtr;
typedef shared_ptr<Tutor> TutorPtr;
typedef bool (*StudentPredicate)(StudentPtr);
typedef bool (*TutorPredicate)(TutorPtr);
typedef bool (*OrderPredicate)(OrderPtr);
#endif //CARRENTAL_TYPEDEFS_H
