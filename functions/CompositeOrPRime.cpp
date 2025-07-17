#include<iostream>
using namespace std;


int Prime(int n) {
    if (n <= 1) return cout << "Neither Composite no Nor Prime no" << endl, 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return cout << "Composite no" << endl, 0;
    }
    return cout << "Prime" << endl, 0;
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    Prime(n);
    return 0;
}
