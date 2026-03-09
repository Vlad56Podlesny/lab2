#include <iostream>
#include "file.h"
#include "folder.h"
#include "user.h"

int main() {

    file f1;
    file f2("photo.jpg", 500);

    folder folder1;
    folder folder2("Documents", 5);

    user u1;
    user u2("Admin");

    f1.showInfo();
    f2.showInfo();

    folder1.showFolder();
    folder2.showFolder();

    u1.showUser();
    u2.showUser();

    return 0;
}