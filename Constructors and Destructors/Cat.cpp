#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat()
{
    cout << "Cat created." << endl;
    happy = false;
}

Cat::~Cat()
{
    cout << "Cat destroyed." << endl;
}

void Cat ::speak()
{
    if (happy)
    {
        cout << "Meouw!!" << endl;
    }
    else
    {
        cout << "Ssssss!!" << endl;
    }
}
