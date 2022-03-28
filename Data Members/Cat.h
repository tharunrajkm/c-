#ifndef CAT_H
#define CAT_H

#pragma once

class Cat
{
    // Private variables cannot be accessed outside of the class
private:
    bool happy; // States of the object or variable in general

public:
    Cat();
    ~Cat();
    void makeHappy();
    void makeSad();
    void speak(); // Methods or subroutines
};

#endif