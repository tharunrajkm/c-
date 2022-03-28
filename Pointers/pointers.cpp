#include <iostream>

using namespace std;

void manipulate(double value)
{
    cout << "2. Value of double in manipulate: " << value << endl;
    value = 10.0;
    cout << "3. Value of double after manipulate: " << value << endl;
}

void manipulatePointer(double *pValue)
{
    cout << "2. Value of double in manipulate: " << *pValue << endl;
    *pValue = 10.0;
    cout << "3. Value of double after manipulate: " << *pValue << endl;
}

int main()
{
    int nValue = 8;
    int *pnValue = &nValue;

    cout << "Int value: " << nValue << endl;
    cout << "Pointer to int address: " << pnValue << endl;
    cout << "Int value via pointer: " << *pnValue << endl;

    cout << "===============================" << endl;

    double dValue = 123.4;

    cout << "1. dValue: " << dValue << endl;
    manipulate(dValue);
    cout << "4. dValue: " << dValue << endl;

    cout << "===============================" << endl;

    double pValue1 = 123.4;

    cout << "1. dValue: " << pValue1 << endl;
    manipulatePointer(&pValue1);
    cout << "4. dValue: " << pValue1 << endl;

    return 0;
}