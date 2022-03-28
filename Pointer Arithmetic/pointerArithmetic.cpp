#include <iostream>

using namespace std;

int main()
{
    const int NSTRINGS = 5; // Constants are usually written in upper case
    string texts[NSTRINGS] = {"one", "two", "three", "four", "five"};

    // Pointer addition
    string *pTexts = texts;
    pTexts += 4;
    cout << *pTexts << endl;


    // Pointer subtraction
    pTexts -= 2;
    cout << *pTexts << endl;


    // Looping through every element
    string *pEnd = &texts[NSTRINGS]; // *pEnd = 5
    pTexts = &texts[0]; // Resetting pText to point a first element
    while(pEnd != pTexts){                     // loop while less than 5 (0,1,2,3,4)
        cout << *pTexts << " " << flush;
        pTexts++;
    }

    cout << endl;

    pTexts = &texts[0];  // Set pTexts back to start
    long element = long(pEnd - pTexts); // Using address
    cout << element << endl;


    // Getting the middle element using pointers
    pTexts += NSTRINGS/2;
    cout << *pTexts << endl;


    return 0;
}
