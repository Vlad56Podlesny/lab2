#ifndef LAB2_FOLDER_H
#define LAB2_FOLDER_H
#include <string>

class Folder {
private:
    std::string folderName;
    int fileCount;

public:
    Folder();
    Folder(std::string folderName, int fileCount);

    void showFolder();

    ~Folder();
};
#endif //LAB2_FOLDER_H