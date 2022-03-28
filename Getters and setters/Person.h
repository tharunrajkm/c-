#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;
#pragma once

class Person
{
public:
    Person();
    ~Person();
    string toString();
    void setName(string newName);
    string getName();

private:
    string name;
};

#endif