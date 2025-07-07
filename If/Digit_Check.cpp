#include<iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= '0' && ch <= '9') {
        cout << "Digit" << endl;
    } else {
        cout << "Not a Digit" << endl;
    }

    return 0;
}
