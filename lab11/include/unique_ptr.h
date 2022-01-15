//
// Created by Krzysztof on 10.01.2022.
//


#ifndef JIPP2_UNIQUE_PTR_H
#define JIPP2_UNIQUE_PTR_H
#include <memory>
#include <iostream>

using namespace std;

template<typename T>
class unique_ptr {

private:
    T* _ptr;
public:
    unique_ptr(T& t);
    unique_ptr(unique_ptr<T>&& uptr);
    ~unique_ptr();
    unique_ptr<T>& operator=(unique_ptr<T>&& uptr);

    unique_ptr(const unique_ptr<T>& uptr) = delete;
    unique_ptr<T>& operator=(const unique_ptr<T>& uptr) = delete;

};


#endif //JIPP2_UNIQUE_PTR_H
