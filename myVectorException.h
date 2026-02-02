#ifndef MYVECTOREXCEPTION_H
#define MYVECTOREXCEPTION_H

#include <iostream>
#include <exception>

class myVectorException : std::exception{
private:
    std::string message;

public:
    myVectorException(const std::string& msg): message(msg){}

    const char* what() const noexcept override{
        return message.c_str();
    }

};


#endif //MYVECTOREXCEPTION_H