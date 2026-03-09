#include <iostream>
#include "file.h"
#include "folder.h"
#include "user.h"

int main() {

    File f1;
    File f2("photo.jpg", 500);

    Folder folder1;
    Folder folder2("Documents", 5);

    User u1;
    User u2("Admin");

    f1.showInfo();
    f2.showInfo();

    folder1.showFolder();
    folder2.showFolder();

    u1.showUser();
    u2.showUser();

    return 0;
}