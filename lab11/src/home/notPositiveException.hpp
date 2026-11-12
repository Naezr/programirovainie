#pragma once

#include <exception>
#include <string>

class notPositiveException : public std::exception {
private:
    std::string message;
public:
    notPositiveException(const std::string& msg) : message(msg) {}

    const char* what() const noexcept override {
        return message.c_str();
    }
};