#include <iostream>
using namespace std;

void swapByReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 5, b = 10;
    cout << "Before Swap (Reference): a = " << a << ", b = " << b << endl;
    swapByReference(a, b);
    cout << "After Swap (Reference): a = " << a << ", b = " << b << endl;
    return 0;
}
