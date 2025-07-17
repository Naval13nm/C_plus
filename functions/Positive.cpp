#include<iostream>
using namespace std;


int NO(int no) {
    if (no > 0) {
        return cout << "Positive" << endl,0;
    } else if (no < 0) {
        return cout << "Negative" << endl,0;
    } else {
       return cout << "Zero" << endl,0;
    }
}
int main() {
    int n;
    cout << "Enter a no: ";
    cin >> n;
    NO(n);
    return 0;
}
