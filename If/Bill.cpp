#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number of units: ";
    cin >> n;
    if (n <= 100) {
        cout << "Units: "<<5*n<< endl;
    }
    else if (n>100 && n <= 200) {
        cout << "Units: "<<6*n<< endl;
    }
    else if (n>=201) {
        cout << "Units: "<<8*n<< endl;
    }
    else {
        cout << " enter a valid Units "<< endl;
    }
}