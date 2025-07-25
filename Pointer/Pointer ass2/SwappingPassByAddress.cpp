#include <iostream>
using namespace std;

void swapByAddress(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 5, b = 10;
    cout << "Before Swap (Address): a = " << a << ", b = " << b << endl;
    swapByAddress(&a, &b);
    cout << "After Swap (Address): a = " << a << ", b = " << b << endl;
    return 0;
}
