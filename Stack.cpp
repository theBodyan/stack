#include <iostream>
#include "Stack.h"

template<class T>
void Stack<T>::push(const T &value) {
    list.push_front(value);
    size++;
}

template<class T>
T Stack<T>::pop() {
    if (size == 0) {
        throw EStackEmpty();
    }

    size--;
    return list.pop_front();
}

template<class T>
int Stack<T>::getSize() {
    return size;
}

template<class T>
void Stack<T>::dump() {
    for (auto i: list) {
        std::cout << i << " ";
    }
}

template<class T>
Stack<T>::Stack() {
    size = 0;
}

template<class T>
Stack<T>::~Stack<T>() {
    clear();
};

