#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
using namespace std;

template <typename T>
class Vector {
protected:
    T * vector;
    int size;
    int capacity;
    bool isFull() const;
    void resize();
public:
    Vector();
    Vector(int capacity);
    Vector(const Vector<T>& other);
    Vector<T> operator=(const Vector<T>& other);
    ~Vector();

    void pushBack(const T& toAdd);
    void print() const;
};

template <typename T>
Vector<T>::Vector() {
    this->capacity = 0;
    this->vector = nullptr;
    this->size = 0;
}

template <typename T>
Vector<T>::Vector(int capacity) {
    this->capacity = capacity;
    this->size = 0;
    this->vector = new T[capacity];
}

template <typename T>
Vector<T>::Vector(const Vector<T>& other) {
    this->capacity = other.capacity;
    this->size = other.size;
    this->vector = new T[this->capacity];
    for(int i = 0; i < this->size; i++) {
        this->vector[i] = other.vector[i];
    } 
}

template <typename T> 
Vector<T> Vector<T>::operator=(const Vector<T>& other) {
    if(this != &other) {
        delete[] this->vector;

        this->capacity = other.capacity;
        this->size = other.size;
        this->vector = new T[this->capacity];
        for(int i = 0; i < this->size; i++) {
            this->vector[i] = other.vector[i];
        } 
    } 
    return *this;
}

template <typename T>
Vector<T>::~Vector() {
    delete[] this->vector;
}

template <typename T>
void Vector<T>::pushBack(const T& toAdd) {
    if(this->isFull()) {
        this->resize();
    }
    this->vector[this->size++] = toAdd;
}

template <typename T>
bool Vector<T>::isFull() const {
    return this->size == this->capacity;
}

template <typename T>
void Vector<T>::resize() {
    T * temp = this->vector;

    this->capacity = 2*this->capacity + 1;
    this->vector = new T[this->capacity];
    for(int i = 0; i < this->size; i++) {
        this->vector[i] = temp[i];
    }

    delete[] temp;
}

template <typename T>
void Vector<T>::print() const {
    for(int i = 0; i < this->size; i++) {
        cout << this->vector[i];
    }
}


#endif//VECTOR_H
