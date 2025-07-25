#include<iostream>
using namespace std;
int factorial(int n) {
    if (n < 0) {
        throw invalid_argument("Negative input not allowed");
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int number;
    cout << "Enter a non-negative integer: ";
    cin >> number;

   factorial(number);
    cout << "Factorial of " << number << " is " << factorial(number) << endl;
    return 0;
}

