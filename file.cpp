#include "File.h"
#include <iostream>

File::File() : File("unknown", 0) {
}

File::File(std::string name, int size) : name(name), size(size) {
}

File::File(const File& other) : name(other.name), size(other.size) {
}

File::~File() {
    std::cout << "File destroyed: " << name << std::endl;
}

void File::setName(std::string name) {
    this->name = name;
}

std::string File::getName() const {
    return name;
}

void File::setSize(int size) {
    this->size = size;
}

int File::getSize() const {
    return size;
}

void File::printInfo() const {
    std::cout << "File: " << name << ", Size: " << size << " KB" << std::endl;
}