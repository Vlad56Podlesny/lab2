#include <iostream>
#include "Folder.h"

Folder::Folder() : folderName("New Folder"), fileCount(0) {}

Folder::Folder(std::string folderName, int fileCount)
    : folderName(folderName), fileCount(fileCount) {}

void Folder::showFolder() {
    std::cout << "Folder: " << folderName << " Files: " << fileCount << std::endl;
}

Folder::~Folder() {
    std::cout << "Folder destroyed: " << folderName << std::endl;
}