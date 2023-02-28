#ifndef STACK_ESTACKEXCEPTION_H
#define STACK_ESTACKEXCEPTION_H

#include <string>

class EStackException : std::exception {
private:
    std::string message;
public:
    explicit EStackException(const std::string &message_);

    ~EStackException() override;

    std::string what();
};


#endif //STACK_ESTACKEXCEPTION_H
