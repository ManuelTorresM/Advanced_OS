#include "lib.h"
#include <iostream>

int sumOfTwoNumbers(int a, int b) 
{
  return (a + b); 
}

Person::Person(const std::string& name, int age) : name(name), age(age) {}

void Person::showInformation() const {
  if(name == "Flo"){
    std::cout << "Que lindo nombre <3" << std::endl;
  }
    std::cout << "Name: " << name << ", Age: " << age << std::endl;
}