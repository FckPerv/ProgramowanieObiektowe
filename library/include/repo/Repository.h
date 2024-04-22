//
// Created by student on 21.06.23.
//

#ifndef CARRENTAL_REPOSITORY_H
#define CARRENTAL_REPOSITORY_H


#include <vector>
#include <memory>
#include "typedefs.h"
#include "string"

template<class T> class Repository {
protected:
    std::vector<T> objects;
public:
    void add(T object);
    const T get(const int &index) const;
    void erase(T object);
    std::vector<T> findBy(bool predicate);
    std::vector<T> findAll();
    T findByPersonalId(const std::string personalId);
};

template<class T>
vector<T> Repository<T>::findBy(bool predicate) {
    return vector<T>();
}


template<class T>
T Repository<T>::findByPersonalId(const std::string personalId) {
    for(int i =0; i<objects.size();i++)
    {
        if(objects[i]->getPersonalId()== personalId)
        {
            return objects[i];
        }
    }

}

template<class T>
vector<T> Repository<T>::findAll() {
    return objects;
}

template<class T>
void Repository<T>::erase(T object) {
    for(int i =0;i<objects.size(); i++)
    {
        if(objects[i]==object)
        {
            objects.erase(objects.begin() + i);
            break;
        }
    }
}

template<class T>
const T Repository<T>::get(const int &index) const {
    return objects[index];
}

template<class T>
void Repository<T>::add(T object) {
    if(object != nullptr)
    {
        objects.push_back(object);
    }
}
#endif //CARRENTAL_REPOSITORY_H
