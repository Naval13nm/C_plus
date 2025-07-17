#include<iostream>
using namespace std;


int Triangle(int a, int b, int c) {
  if (a + b + c == 180 && a > 0 && b > 0 && c > 0)
   {
        return cout<<"Valid triangle",0;
    } else {
        return cout<<"Not Valid triangle",0; 
    }
}
int main() {
    int a,b,c;
    cout << "Enter angles of traingle: ";
    cin >> a >> b >> c;
    Triangle(a,b,c);
    return 0;
}
