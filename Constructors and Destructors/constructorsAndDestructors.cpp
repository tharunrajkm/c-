#include <iostream>
#include "Cat.h"

using namespace std;

int main()
{

    {
        Cat jim;
        jim.speak();
    } // Scope of the object and also can be used to free up space after destroying object but not recommended

 
    // Cat bob;
    // bob.speak();

    return 0;

} // Here object is destroyed and memory is freed due to destructor