#include<iostream>
using namespace std;
int Range(int n) {
    if (n>=0 && n<=100) {
        return cout<<n<<" "<<"Number is in the range between 0 to 100",0; 
    } else {
        return cout<<n<<" "<<"Number is not in the range ",0; 
    }
}
int main() {
    int x;
    cout << "Enter Any integer: "<< endl;
    cin >> x;
    Range(x);
    return 0;
}