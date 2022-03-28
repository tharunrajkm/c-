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

    // Allocating int memory in heap
    int *pInt = new int;
    *pInt = 8;
    cout << *pInt << endl;
    delete pInt; // Sets memory to null
    cout << *pInt << endl;

    cout << "=======================" << endl;

    // Animal *pAnimal = new Animal[10];
    // pAnimal[5].setName("George"); // At index five
    // pAnimal[5].speak();
    // delete[] pAnimal;

    cout << "=======================" << endl;

    char *pMem = new char[1000]; // 10000 bytes since each char is 1 byte
    delete[] pMem;

    // char c = 'a';
    // string name(1, c);
    // cout << name << endl;
    char c1 = 'b';
    c1++;
    string name1(5, c1);
    cout << name1 << endl;

    cout << "=======================" << endl;

    // Assignment

    Animal *pAnimalNew = new Animal[26];
    char c = 'a';
    string alphabet(1,c);

    for (int i = 0; i < 26; i++)
    {
        pAnimalNew[i].setName(alphabet);
        pAnimalNew[i].speak();
        c++;
    }

    delete[] pAnimalNew;

    return 0;
}