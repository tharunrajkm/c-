#include <iostream>
#include "Person.h"
using namespace std;

int main()
{
    Person person1;
    Person person2("Bob"); //Type2 constructor
    Person person3("Allan", 30); //Type3 constructor


    cout << person1.toString() << endl;
    cout << person2.toString() << endl;
    cout << person3.toString() << endl;

    return 0;
}