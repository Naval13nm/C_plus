#include<iostream>
using namespace std;


int NO(int no) {
    if (no%3 == 0 && no%5 == 0) {
        return cout << "divisible by both 3 and 5" << endl,0;
    } else if (no < 0) {
        return cout << "not divisible" << endl,0;
    }
}
int main() {
    int n;
    cout << "Enter a no: ";
    cin >> n;
    NO(n);
    return 0;
}
