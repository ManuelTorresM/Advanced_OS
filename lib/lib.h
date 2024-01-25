#ifndef LIB_H
#define LIB_H

#include <string>
#include <iostream>
#include <unistd.h>

int sumOfTwoNumbers(int a, int b);

void forking_1();

class Person {
public:
    Person(const std::string& name, int age);
    void showInformation() const; // Constant member function, do not change atributes

private:
    std::string name;
    int age;
};

#endif