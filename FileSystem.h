#ifndef LAB2_USER_H
#define LAB2_USER_H

#include <string>

class FileSystem {
private:
    std::string diskName;
    int totalFolders;

public:
    FileSystem();
    FileSystem(std::string diskName, int totalFolders = 0);
    FileSystem(const FileSystem& other);
    ~FileSystem();

    void setDiskName(std::string diskName);
    std::string getDiskName() const;

    void setTotalFolders(int totalFolders);
    int getTotalFolders() const;

    void addFolder();
    void printInfo() const;
};

#endif //LAB2_USER_H