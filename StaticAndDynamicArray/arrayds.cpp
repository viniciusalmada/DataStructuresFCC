//
// Created by vinicius on 3/19/2021.
//
#include "arrayds.h"

template<typename T>
ArrayDS<T>::ArrayDS(int capacity) {
    this->data = std::unique_ptr<T[]>(new T[capacity]);
    this->capacity = capacity;
}

template<typename T>
ArrayDS<T>::ArrayDS() : ArrayDS(16) {
}

template<typename T>
int ArrayDS<T>::size() {
    return this->len;
}

template<typename T>
bool ArrayDS<T>::isEmpty() {
    return size() == 0;
}

template<typename T>
T ArrayDS<T>::get(int index) {
    return data[index];
}

template<typename T>
void ArrayDS<T>::set(int index, T elem) {
    data[index] = elem;
}

template<typename T>
void ArrayDS<T>::clear() {
    for (int i = 0; i < capacity; ++i) {
        data[i] = T();
    }
}

