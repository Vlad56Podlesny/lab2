#ifndef LAB2_FOLDER_H
#define LAB2_FOLDER_H

#include <string>

class User {
private:
    std::string username;

public:
    User();
    User(std::string username);

    void showUser();

    ~User();
};

#endif