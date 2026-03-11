#ifndef LAB2_FILE_H
#define LAB2_FILE_H
#include <string>

class File {
private:
    std::string name;
    int size;

public:
    File();
    File(std::string name, int size = 0);
    File(const File& other);
    ~File();

    void setName(std::string name);
    std::string getName() const;

    void setSize(int size);
    int getSize() const;

    void printInfo() const;
};
#endif //LAB2_FILE_H