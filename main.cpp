#include <iostream>
#include "Stack.h"
#include "EStackException.h"

#define log(x) std::cout << x << std::endl

int main() {

    Stack<int> S;
    try {
        S.pop();
    }
    catch (EStackException &e) {
        log(e.what());
    }

    Stack<int> S1;
    log("Использование Push");
    for (int i = 5; i > 0; i--)
        S1.push(i);
    S1.dump();

    log("");
    log("Удаляем 1элемент, использование Pop");
    S1.pop();
    S1.dump();

    log("");
    log("размер стека S1:");
    log(S1.getSize());
    S1.clear();
    log("cтек S1 удален");
    S1.dump();
    log("размер удаленного стека S1:");
    log(S1.getSize());
}