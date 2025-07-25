#include <iostream>
using namespace std;

int main() {
    int *pInt;
    char *pChar;
    float *pFloat;
    double *pDouble;

    cout << "Size of int: " << sizeof(*pInt) << " bytes" << endl;
    cout << "Size of char: " << sizeof(*pChar) << " bytes" << endl;
    cout << "Size of float: " << sizeof(*pFloat) << " bytes" << endl;
    cout << "Size of double: " << sizeof(*pDouble) << " bytes" << endl;

    return 0;
}
