#include<iostream>
using namespace std;

void Natural(int n) {
    for(int i = 1; i <= n; i++) {
        cout << i << endl;
    }
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    Natural(n);
    return 0;
}
