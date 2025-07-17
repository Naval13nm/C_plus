#include<iostream>
using namespace std;


int charornot(char ch) {
   if (ch>='a' && ch<='z' || ch>='A' && ch<='Z') {
    return cout << "Alphabet" << endl,0;
   }
  return cout << "Not Alphabet" << endl,0;
}
int main() {
    char n;
    cout << "Enter a alphabet: ";
    cin >> n;
    charornot(n);
    return 0;
}


