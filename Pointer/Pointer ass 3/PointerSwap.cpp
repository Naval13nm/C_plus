#include <iostream>
using namespace std;

void swapNoTemp(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int a = 5, b = 10;
    swapNoTemp(&a, &b);
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}
