#include<iostream>
using namespace std;


int leap(int n) {
    if ((n%4==0&& n%100!=0)||n%400==0) return cout << "Leap Year" << endl, 0;
    return cout << "Not leap" << endl, 0;
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    leap(n);
    return 0;
}
