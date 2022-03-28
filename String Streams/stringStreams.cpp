#include <iostream>
#include <sstream> // Used for string concatenation

using namespace std;

int main()
{
    string name = "Bob";
    int age = 32;

    stringstream ss;

    ss << "Name is: ";
    ss << name;
    ss << "; Age is: ";
    ss << age;

    string info = ss.str(); // Convert whole message into ss string

    cout << info << endl;



    return 0;
}