#include<iostream>
using namespace std;
string even(int n){
    if(n % 2 == 0) {
        return "Even";
    } else {
        return "Odd";
    }
}
int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    cout << even(number) << endl;
    return 0;
}