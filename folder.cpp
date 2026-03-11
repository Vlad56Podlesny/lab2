#include "Folder.h"
#include <iostream>

Folder::Folder() : Folder("NewFolder", 0) {
}

Folder::Folder(std::string name, int fileCount) : name(name), fileCount(fileCount) {
}

Folder::Folder(const Folder& other) : name(other.name), fileCount(other.fileCount) {
}

Folder::~Folder() {
    std::cout << "Folder destroyed: " << name << std::endl;
}

void Folder::setName(std::string name) {
    this->name = name;
}

std::string Folder::getName() const {
    return name;
}

void Folder::setFileCount(int fileCount) {
    this->fileCount = fileCount;
}

int Folder::getFileCount() const {
    return fileCount;
}

void Folder::addFile() {
    fileCount++;
}

void Folder::printInfo() const {
    std::cout << "Folder: " << name << ", Files: " << fileCount << std::endl;
}