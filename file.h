#ifndef LAB2_FILE_H
#define LAB2_FILE_H
#include <string>

class File {
private:
    std::string name;
    int size;

public:
    File();
    File(std::string name, int size);

    void showInfo();

    ~File();
};
#endif //LAB2_FILE_H