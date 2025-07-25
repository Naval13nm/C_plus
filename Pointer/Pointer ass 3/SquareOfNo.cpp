#include <iostream>
using namespace std;

void square(int *n) {
    *n = (*n) * (*n);
}

int main() {
    int num = 7;
    square(&num);
    cout << "Square: " << num << endl;
    return 0;
}
