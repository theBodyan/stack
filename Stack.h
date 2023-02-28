#ifndef STACK_STACK_H
#define STACK_STACK_H

#include <forward_list>

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


#endif //STACK_STACK_H
