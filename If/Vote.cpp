#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Age: ";
    cin >> n;

    if (n < 18) {
        cout << "You are not eligible to vote." << endl;
    } else if (n >= 18 && n <= 120) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "Invalid age entered." << endl;
    }

    return 0;
}