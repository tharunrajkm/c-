#include <iostream>
using namespace std;

void changeVariable(double &value){
    value = 125.66;
}

int main(){

    int value1 = 8;
    int &value2 = value1; // Referencing or aliasing
    value2 = 10;

    cout << "Value1: " << value1 << endl;
    cout << "Value2: " << value2 << endl;

    cout << "=============" << endl;

    double value = 6.547;
    changeVariable(value);

    cout << value << endl;

    return 0;
}

