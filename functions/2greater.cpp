#include<iostream>
using namespace std;
int Greater(int a, int b) {
    return (a > b) ? a : b;
}
int main() {
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;
    cout << "The greater number is: " << Greater(x, y) << endl;
    return 0;
}