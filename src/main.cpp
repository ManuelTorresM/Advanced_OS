#include <iostream>
#include <vector>
#include "lib.h"

using namespace std;

int main() {

    cout << sumOfTwoNumbers(1,2) << endl;

    const Person person("Flo", 22);
    person.showInformation();

    return 0;
}