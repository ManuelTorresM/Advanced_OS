#ifndef LIB_H
#define LIB_H

#include <string>

int sumOfTwoNumbers(int a, int b);

class Person {
public:
    Person(const std::string& name, int age);
    void showInformation() const; // Constant member function, do not change atributes

private:
    std::string name;
    int age;
};

#endif