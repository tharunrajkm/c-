#include <iostream>
using namespace std;

class Animal
{
private:
    string name;

public:
    Animal() { cout << "Animal created." << endl; }
    Animal(const Animal &other) : name(other.name) { cout << "Animal created by copying." << endl; }
    ~Animal() { cout << "Destructor called" << endl; }
    void setName(string name) { this->name = name; }
    void speak() const { cout << "My name is " << name << endl; } // declaring constant method
};

int main()
{
    Animal cat;
    cat.setName("Freddy");
    cat.speak();

    // Using the new operator
    // Use of the new operator signifies a request for the memory allocation on the heap. If the sufficient memory is available,
    // it initializes the memory and returns its address to the pointer variable.

    // The new operator should only be used if the data object should remain in memory until delete is called.
    // Otherwise if the new operator is not used, the object is automatically destroyed when it goes out of scope.
    // In other words, the objects using new are cleaned up manually while other objects are automatically cleaned when they go out of scope.

    Animal *pCat1 = new Animal();
    pCat1->setName("Adam");
    pCat1->speak();
    delete pCat1;

    cout << sizeof(pCat1) << endl; // Same as type long int

    return 0;
}