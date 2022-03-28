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

// Function that returns an object
Animal *createAnimal(){
Animal *pAnimal = new Animal();
pAnimal->setName("Binny");
return pAnimal;
}


int main()
{
    Animal *pFrog = createAnimal();
    pFrog->speak();
    delete pFrog;

    return 0;
}