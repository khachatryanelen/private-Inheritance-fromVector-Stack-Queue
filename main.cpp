#include <iostream>
#include "vector.h"
#include "queue.h"
#include "stack.h"
#include "foreach.h"
#include <vector>




int main(int argc,const char* argv[]){
    
    // Queue<int> q;
    // q.push(1);
    // q.push(2);
    // q.pop();
    // std::cout << q.front() <<std::endl; 


    // Stack<int> s;
    // s.push(1);
    // s.push(5);
    // s.push(4);
    // s.push(15);

    // s.pop();
    
    // std::cout << s.top() <<std::endl; 

    Vector<int> v;
    v.pushBack(1);
    v.pushBack(2);
    v.pushBack(3);

    v.at(5); //check

    // v.reserve(10);
    // std::cout<<"Size is: "<<v.getSize()<<std::endl;
    // v.resize(10);
    // std::cout<<"Size is: "<<v.getSize()<<std::endl;

    std::vector<int> vec={1,2,3,4,5,6,7};
    my_foreach(vec.begin(),vec.end(),[](int x){
        std::cout<<x<<std::endl;
    });

    my_foreach(vec.begin(),vec.end(),[](int x){
        std::cout<<"i= "<<2*x<<std::endl;
    });
    
    return 0;
}