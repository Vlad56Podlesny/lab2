#ifndef LAB2_USER_H
#define LAB2_USER_H
#include <iostream>
#include "User.h"

User::User() : username("guest") {}

User::User(std::string username) : username(username) {}

void User::showUser() {
    std::cout << "User: " << username << std::endl;
}

User::~User() {
    std::cout << "User destroyed: " << username << std::endl;
}
#endif //LAB2_USER_H