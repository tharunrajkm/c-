#include <iostream>
#include "Person.h"

using namespace std;

int main()
{

    Person person;

    person.setName("Gorgina");

    cout << person.toString() << endl;

    cout << "Name of the person through get method: " << person.getName() << endl;

    return 0;
}