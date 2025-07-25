#include <iostream>
using namespace std;

int cube(int n) {
    return n * n * n;
}

int main() {
    int num = 3;
    int (*funcPtr)(int) = cube;  // pointer to function
    cout << "Cube: " << funcPtr(num) << endl;
    return 0;
}
