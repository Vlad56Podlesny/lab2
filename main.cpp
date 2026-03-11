#include <iostream>
#include "file.h"
#include "folder.h"
#include "FileSystem.h"

int main() {
    File file1;
    File file2("document.txt", 120);
    File file3(file2);

    Folder folder1;
    Folder folder2("Photos", 5);
    Folder folder3(folder2);

    FileSystem fs1;
    FileSystem fs2("Disk D", 3);
    FileSystem fs3(fs2);

    std::cout << "\n--- FILES ---\n";
    file1.printInfo();
    file2.printInfo();
    file3.printInfo();

    std::cout << "\n--- FOLDERS ---\n";
    folder1.printInfo();
    folder2.printInfo();
    folder3.printInfo();

    std::cout << "\n--- FILE SYSTEMS ---\n";
    fs1.printInfo();
    fs2.printInfo();
    fs3.printInfo();

    std::cout << "\n--- CHANGES ---\n";
    folder2.addFile();
    fs2.addFolder();

    folder2.printInfo();
    fs2.printInfo();

    return 0;
}