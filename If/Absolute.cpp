#include <iostream>
using namespace std;

int main() {
    float num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (num < 0) {
        cout << "Absolute value: " << -num;
    } else {
        cout << "Absolute value: " << num;
    }

    return 0;
}
