#ifndef LAB2_FOLDER_H
#define LAB2_FOLDER_H
#include <string>

class Folder {
private:
    std::string name;
    int fileCount;

public:
    Folder();
    Folder(std::string name, int fileCount = 0);
    Folder(const Folder& other);
    ~Folder();

    void setName(std::string name);
    std::string getName() const;

    void setFileCount(int fileCount);
    int getFileCount() const;

    void addFile();
    void printInfo() const;
};

#endif