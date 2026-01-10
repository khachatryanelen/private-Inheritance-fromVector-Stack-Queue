#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <initializer_list>

template <typename T>
class Vector{
private:
    int CAPACITY=12;
    int size;
    T* data;
    
public:
    Vector(): data(nullptr),size(0),CAPACITY(0){ }
    Vector(int cap): size(0),CAPACITY(cap){
        data=new T[CAPACITY];
    }
    Vector(std::initializer_list<T> init):size(init.size()),CAPACITY(2*size), data(new T[CAPACITY]) {
        const T* it=init.begin();
        for(int j=0;j<size;j++){
            data[j]=it[j];
        }
    }
    Vector(const Vector& vector): size(vector.size),CAPACITY(vector.CAPACITY){
        data=new T[CAPACITY];
        for(int i=0;i<size;i++){
            data[i]=vector.data[i];
        }
    }
    Vector& operator=(const Vector& vector){
        if(this!=&vector){
            delete[] data;
            
            size=vector.size;
            CAPACITY=vector.CAPACITY;
            data=new T[CAPACITY];
            for(int i=0;i<size;i++){
                data[i]=vector.data[i];
            }
        }
        return *this;
    }
    Vector(Vector&& vector){
        CAPACITY=vector.CAPACITY;
        size=vector.size;
        data=new T[CAPACITY];
        
        vector.CAPACITY=0;
        vector.size=0;
        vector.data=nullptr;
    }
    Vector& operator=(Vector&& vector){
        if(this!=&vector){
            delete[] data;
            CAPACITY=vector.CAPACITY;
            size=vector.size;
            data=vector.data;
            
            vector.CAPACITY=0;
            vector.size=0;
            vector.data=nullptr;
        }
        return *this;
    }
    ~Vector(){
        delete[] data;
        data=nullptr;
    }
    
    void pushBack(const T& element){
        if(size==CAPACITY){
            resize((CAPACITY+1)*2);
        }
        data[size++]=element;
    }
    
    int getSize() const{
        return size;
    }
    int getCapacity() const{
        return CAPACITY;
    }

    T& operator[](int index){
        return data[index];
    }

    void popBack(){
        if(size>0)
            size--;
    }
    
private:
    void resize(int cap){
        T* newData=new T[cap];
        for(int i=0;i<size;i++){
            newData[i]=data[i];
        }
        delete[] data;
        data=newData;
        CAPACITY=cap;
    }
};


#endif  //VECTOR_H