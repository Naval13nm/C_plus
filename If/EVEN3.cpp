#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n % 2 == 0 && n% 3 == 0) {
        cout << n << " is an even number & divisible by 3" << endl;
    } else {
        cout << n << " is an odd number." << endl;
    }
}