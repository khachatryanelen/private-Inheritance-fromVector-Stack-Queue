#ifndef FOREACH_H
#define FOREACH_H

#include <iostream>

template <typename It,typename Function>
void  my_foreach(It begin,It end,Function func){
    for(It it=begin;it!=end;++it){
        func(*it);
    }
}



#endif //FOREACH_H