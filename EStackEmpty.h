#ifndef STACK_ESTACKEMPTY_H
#define STACK_ESTACKEMPTY_H
#include "EStackException.h"

class EStackEmpty : public EStackException {
public:
    EStackEmpty() : EStackException("Stack is empty!") { }
};


#endif //STACK_ESTACKEMPTY_H
