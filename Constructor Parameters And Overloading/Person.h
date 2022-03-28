#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;

#pragma once

class Person
{
public:
    Person(); // Multiple constructurors with different parameters
    Person(string newName){
        name = newName; age = 0;
    };
    Person(string newName, int newAge);
    string toString();

private:
    string name;
    int age;
};

#endif