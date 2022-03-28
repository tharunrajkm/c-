#include <iostream>

using namespace std;

int main()
{

    char text[] = "hello";

    int nChar = sizeof(text) - 1; // To minus the null terminator character

    char *pStart = text;
    char *pEnd = text + nChar - 1;

    // cout << *pEnd << endl;

    while(pStart < pEnd){
        char save = *pStart;
        *pStart = *pEnd;
        *pEnd = save;

        pStart++;
        pEnd--;
    }

    cout << text << endl;

    return 0;
}