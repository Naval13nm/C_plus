#include <iostream>
using namespace std;

int main() {
    int *p = new int;   // dynamically allocate memory for a single integer
    *p = 50;            // store value 50
    cout << "Value  at p: " << *p << endl;
    cout << "Address  in p: " << p << endl;

    delete p;           // free the allocated memory

    return 0;
}
