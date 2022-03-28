#include <iostream>
#include "utils.h"

using namespace std;

// This is called prototype function
// Alternatively we can define this in header file
// void doSomething();

int main()
{

    doSomething();
    doSomething();

    return 0;
}

void doSomething()
{
    cout << "Hello World" << endl;
}
