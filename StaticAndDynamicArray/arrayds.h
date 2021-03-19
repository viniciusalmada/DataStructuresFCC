//
// Created by vinicius on 3/19/2021.
//

#ifndef DATASTRUCTURESFCC_ARRAY_DS_H
#define DATASTRUCTURESFCC_ARRAY_DS_H

#include <memory>

template<typename T>
class ArrayDS {
    std::unique_ptr<T[]> data;
    int len = 0;       // Length user thinks array is
    int capacity = 0;  // Actual array size

public:
    explicit ArrayDS(int capacity);

    ArrayDS();

    int size();

    bool isEmpty();

    T get(int index);

    void set(int index, T elem);

    void clear();
};

#endif //DATASTRUCTURESFCC_ARRA_YDS_H
