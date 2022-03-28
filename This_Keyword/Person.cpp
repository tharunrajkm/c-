#include "Person.h"
#include <sstream>


Person::Person()
{
    name = "";
    age = 0;
}

Person :: Person(string name, int age){
    this->name = name; // this pointer variable contains the memory location of each individual object created
    this->age = age;

    cout << "Memory location of object: " << this << endl;
}

string Person::toString()
{
    stringstream ss;

    ss << "Name is: ";
    ss << name;
    ss << "; Age is: ";
    ss << age;

    return ss.str();
}
