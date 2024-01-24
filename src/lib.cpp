#include "lib.h"
#include <iostream>
#include <unistd.h>

// Begin of Function 1
int sumOfTwoNumbers(int a, int b) 
{
  return (a + b); 
}
// End of Function 1

// Begin Fork Funtion
void forking_1(){
  printf("Starting with PID %d!\n", getpid());


  int ret = fork();
  printf("Both prints this message\n");

  if (ret == 0) {
      // Child
      printf("I'm the child and my parent is %d!\n", getppid());
  } else {
      // Parent
      printf("I'm the parent and the child has pid %d!\n", ret);
  }
}



// Begin of Class 1
Person::Person(const std::string& name, int age) : name(name), age(age) {}

void Person::showInformation() const {
  if(name == "Flo"){
    std::cout << "Que lindo nombre <3" << std::endl;
  }
    std::cout << "Name: " << name << ", Age: " << age << std::endl;
}

// End of Class 1