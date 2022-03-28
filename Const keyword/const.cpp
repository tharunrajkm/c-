#include <iostream>
using namespace std;

class Animal
{
private:
    string name;

public:
    void setName(string name) { this->name = name; }
    void speak() const { cout << "My name is " << name << endl; } // declaring constant method
};

int main()
{
    const double PI = 3.141592;
    cout << PI << endl;

    cout << "=================" << endl;

    Animal animal;
    animal.setName("Adam");
    animal.speak();

    cout << "=================" << endl;

    int value = 8;
    int number = 11;

    // const int *pValue = &value;            //Pointer pointed to a constant int: connot change the int value of pointer but can be done by the variable name directly.
    // int *const pValue = &value;            // Constant pointer to an int: pointer cannot be reassigned to other location 
    // const int *const pValue = &value;      // Constant pointer to constant int

    int *pValue = &value;
    pValue = &number; // Error with this : int * const pValue = &value;     and     const int *const pValue = &value; 
    *pValue = 12;     // Error with this : const int *pValue = &value;      and     const int *const pValue = &value; 

    cout << *pValue << endl;

    return 0;
}