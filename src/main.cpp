#include <iostream>
#include <vector>
#include <unistd.h>
#include "lib.h"

using namespace std;

int main() {

    cout << sumOfTwoNumbers(1,2) << endl;

    const Person person("Flo", 22);
    person.showInformation();

    //forking_1();
    printf("Starting with PID %d\n", getpid());

    int ret = fork();
    printf("Both prints this message\n");

    if (ret == 0) {
        // Child
        printf("I'm the child and my parent is %d!\n", getppid());
    } else {
        // Parent
        printf("I'm the parent and the child has pid %d!\n", ret);
    }

    std::cout << std::endl;
    return 0;
}