#include<iostream>
using namespace std;
void Grade(int n){
    if(n >= 90 && n <= 100) {
         cout<<'A';
    } else if(n >= 75 && n < 90) {
            cout<<'B';
    } else if(n >= 50 && n < 75) {
         cout<<'C';
    } else if(n >= 35 && n < 50) {
          cout<<'D';
    } else {
           cout<<'F';
    }
}
int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    Grade(number);
}