#ifndef STACK_STACK_H
#define STACK_STACK_H

#include <forward_list>
#include "Stack.h"
#include "EStackEmpty.h"

template<class T>
class Stack {
public:

    Stack();

    ~Stack();

    void push(const T &value);

    T pop();

    int getSize();

    void clear();

    void dump();

private:
    std::forward_list<T> list;
    int size;
};

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

    T front = list.front();
    size--;
    list.pop_front();
    return front;
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

template<class T>
void Stack<T>::clear() {
    list.clear();
    size = 0;
}

#endif //STACK_STACK_H
