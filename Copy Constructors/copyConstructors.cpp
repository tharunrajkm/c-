#include <iostream>
using namespace std;

class Animal
{
private:
    string name;

public:
    Animal() { cout << "Animal created." << endl; }
    Animal(const Animal &other) : name(other.name) { cout << "Animal created by copying." << endl; }
    void setName(string name) { this->name = name; }
    void speak() const { cout << "My name is " << name << endl; } // declaring constant method
};

int main()
{
    Animal animal1;
    animal1.setName("Freddy");
    animal1.speak();

    Animal animal2 = animal1; // Implementation of copy contructor using = operator
    animal2.speak();

    animal2.setName("Bob");
    animal2.speak();

    Animal animal3(animal1); // Other method of invoking copy constructor directly
    animal3.setName("Tom");
    animal3.speak();

    return 0;
}