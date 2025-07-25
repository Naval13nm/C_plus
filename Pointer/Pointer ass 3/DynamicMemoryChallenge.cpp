#include <iostream>
using namespace std;

int main() {
    int *ptr = new int(100);  // allocate memory with value 100
    cout << "Allocated memory: " << *ptr << endl;

    *ptr = 200;
    cout << "Modified value: " << *ptr << endl;

    *ptr = 300;
    cout << "Modified value: " << *ptr << endl;

    delete ptr;  // free memory
    return 0;
}
