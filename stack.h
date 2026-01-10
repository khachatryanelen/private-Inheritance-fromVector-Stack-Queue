#ifndef STACK_H
#define STACK_H

#include <iostream>
#include "vector.h"

template <typename T>
class Stack : private Vector<T>{

public:
    void push(T element){
        Vector<T>::pushBack(element);
    }
    void pop(){
        Vector<T>::popBack();
    }

    T& top(){
        return (*this)[this->getSize()-1];
    }

};


#endif //STACK_H
