#include <iostream>

using namespace std;

int main()
{

    char text[] = "hello";

    for (int i = 0; i < sizeof(text); i++)  // sizeof returns 6 for 5 elements and always makes the value of last element 0 in char string array 
    {
        cout << i << ": " << text[i] << endl;
    }

    // Looping until last element in 0
    // Null terminator character is generated to mark the end of an array

    int k = 0;

    while(true){
        if (text[k] == 0) break;

        cout << text[k] << " "<< flush;
        k++;
    }

    return 0;
}