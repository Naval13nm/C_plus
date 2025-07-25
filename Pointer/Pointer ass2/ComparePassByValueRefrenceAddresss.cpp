#include <iostream>
using namespace std;

// Pass by Value
void modifyValue(int x) {
    x = x + 10;  // Changes local copy only
}

// Pass by Reference
void modifyReference(int &x) {
    x = x + 10;  // Changes original variable
}

// Pass by Address
void modifyAddress(int *x) {
    *x = *x + 10;  // Changes original variable through pointer
}

int main() {
    int a = 5, b = 10;

    modifyValue(a);
    cout << "Pass by Value: a = " << a << ", b = " << b << endl;

    modifyReference(a);
    cout << "Pass by Reference: a = " << a << ", b = " << b << endl;

    modifyAddress(&a);
    cout << "Pass by Address: a = " << a << ", b = " << b << endl;

    return 0;
}
