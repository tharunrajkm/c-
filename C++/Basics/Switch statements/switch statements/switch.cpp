#include<iostream>
using namespace std;

int main()
{
    int value = 8;

    switch(value){
        case 1:
            cout << "The value is 1" << endl;
            break;
        case 2:
            cout << "The value is 2" << endl;
            break;
        case 3:
            cout << "The value is 3" << endl;
            break;
        case 4:
            cout << "The value is 4" << endl;
            break;
        default:
            cout << "Unrecognised value." << endl;
    }
    return 0;
}