#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include "vector.h"

template <typename T>
class Queue : private Vector<T>{

public:
    void push(T element){
        Vector<T>::pushBack(element);
    }
    void pop(){
        int n=this->getSize();
        
        for(int i=1;i<n;i++){
            (*this)[i-1]=(*this)[i];
        }

        Vector<T>::popBack();
    }

    T& front(){
        return (*this)[0];
    }

};


#endif //QUEUE_H
