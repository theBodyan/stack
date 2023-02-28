#include "EStackException.h"

std::string EStackException::what() {
    return message;
}

EStackException::EStackException(const std::string &message_) {
    message = message_;
}

EStackException::~EStackException() {
    message.clear();
}
