#include <iostream>
#include "File.h"

File::File() : name("unknown"), size(0) {}

File::File(std::string name, int size) : name(name), size(size) {}

void File::showInfo() {
    std::cout << "File: " << name << " Size: " << size << " KB" << std::endl;
}

File::~File() {
    std::cout << "File destroyed: " << name << std::endl;
}