#include <iostream>
using namespace std;

int sumOfDigits(int *n) {
    int sum = 0;
    int num = *n;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int num = 456;
    cout << "Sum of digits: " << sumOfDigits(&num) << endl;
    return 0;
}
