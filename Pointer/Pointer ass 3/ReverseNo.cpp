#include <iostream>
using namespace std;

void reverseNumber(int *n) {
    int rev = 0;
    int num = *n;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    *n = rev;
}

int main() {
    int num = 12345;
    reverseNumber(&num);
    cout << "Reversed number: " << num << endl;
    return 0;
}
