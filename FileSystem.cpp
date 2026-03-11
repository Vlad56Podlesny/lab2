#include "FileSystem.h"
#include <iostream>

FileSystem::FileSystem() : FileSystem("LocalDisk", 0) {
}

FileSystem::FileSystem(std::string diskName, int totalFolders)
    : diskName(diskName), totalFolders(totalFolders) {
}

FileSystem::FileSystem(const FileSystem& other)
    : diskName(other.diskName), totalFolders(other.totalFolders) {
}

FileSystem::~FileSystem() {
    std::cout << "FileSystem destroyed: " << diskName << std::endl;
}

void FileSystem::setDiskName(std::string diskName) {
    this->diskName = diskName;
}

std::string FileSystem::getDiskName() const {
    return diskName;
}

void FileSystem::setTotalFolders(int totalFolders) {
    this->totalFolders = totalFolders;
}

int FileSystem::getTotalFolders() const {
    return totalFolders;
}

void FileSystem::addFolder() {
    totalFolders++;
}

void FileSystem::printInfo() const {
    std::cout << "FileSystem: " << diskName
              << ", Total folders: " << totalFolders << std::endl;
}