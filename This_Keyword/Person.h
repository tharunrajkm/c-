#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;
#pragma once

class Person
{
public:
    Person();
    Person(string name, int age);
    string toString();

private:
    string name;
    int age;
};

#endif