#include <iostream>
using namespace std;

void modifyValue(int *p) {  // p is a pointer receiving address of variable
    *p = *p + 10;           // modify the original variable
}

int main() {
    int a = 20;
    cout << "Before function call: a = " << a << endl;

    modifyValue(&a);        // pass the address of a

    cout << "After function call: a = " << a << endl;
    return 0;
}
