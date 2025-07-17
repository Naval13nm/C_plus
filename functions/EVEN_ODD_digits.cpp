#include<iostream>
using namespace std;
int EvenOddDigit(int n) {
    int last_digit;
    int OddCOunt = 0, EvenCount = 0;
    while (n > 0) {
        last_digit = n % 10;
        if (last_digit % 2 == 0) {
            EvenCount++;
        } else {
            OddCOunt++;}
        n/= 10;
    }
    return cout << "Even Digits: " << EvenCount << ", Odd Digits: " << OddCOunt << endl,0 ;
}
int main() {
    int x;
    cout << "Enter Any No: ";
    cin >> x;
    EvenOddDigit(x);
    return 0;
}