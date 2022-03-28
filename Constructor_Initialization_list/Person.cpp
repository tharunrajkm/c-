#include "Person.h"
#include <sstream>

Person ::Person(string name, int age) : name(name), age(age) // instead of using this special pointer variable
{
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
