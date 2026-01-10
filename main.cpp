#include <iostream>
#include "vector.h"
#include "queue.h"
#include "stack.h"




int main(int argc,const char* argv[]){
    
    Queue<int> q;
    q.push(1);
    q.push(2);
    q.pop();
    std::cout << q.front() <<std::endl; 


    Stack<int> s;
    s.push(1);
    s.push(5);
    s.push(4);
    s.push(15);

    s.pop();
    
    std::cout << s.top() <<std::endl; 


    return 0;
}