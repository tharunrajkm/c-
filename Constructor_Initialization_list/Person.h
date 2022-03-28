#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;
#pragma once

class Person
{
public:
    Person(): name("unnamed"), age(0) {};// This is the constructor initialization list; // can be done in header or cpp file
    Person(string name, int age);
    string toString();

private:
    string name;
    int age;
};

#endif