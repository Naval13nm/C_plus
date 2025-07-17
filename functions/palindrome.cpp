#include<iostream>
using namespace std;
int Palinodrome(int n) {
    int m=n;
    int rev=0;
    int last_digit;
    while (m > 0) {
        last_digit = m % 10;
        rev = rev * 10 + last_digit;
        m /= 10;
    }
    return (rev == n);
}
int main() {
    int x;
    cout << "Enter Any integer: ";
    cin >> x;
    if (Palinodrome(x)) {
        cout << x << " is a palindrome number." << endl;
    } else {
        cout << x << " is not a palindrome number." << endl;
    }
    return 0;
}