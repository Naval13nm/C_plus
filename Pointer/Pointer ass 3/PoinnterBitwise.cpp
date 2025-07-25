#include <iostream>
using namespace std;

void bitwiseOps(int *a, int *b) {
    cout << "Bitwise AND: " << (*a & *b) << endl;
    cout << "Bitwise OR: " << (*a | *b) << endl;
    cout << "Bitwise XOR: " << (*a ^ *b) << endl;
}

int main() {
    int a = 5, b = 3;
    bitwiseOps(&a, &b);
    return 0;
}
