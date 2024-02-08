#include <iostream>

class Person {
public:
    void setName(std::string newName) {
        name = newName;
    }
    std::string name;
};

int main() {
    Person *ptrPerson = new Person();
    ptrPerson->setName("John Smith");
    std::cout << "ptrPerson name is: "<< ptrPerson->name << std::endl;
    delete ptrPerson;
    return 0;
}

