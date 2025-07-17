#include<iostream>
using namespace std;


int Vowel(char ch) {
   if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
    return cout << "Vowel" << endl,0;
   } else {
    return cout << "Not Vowel" << endl,0;
   }
}
int main() {
    char n;
    cout << "Enter a alphabet: ";
    cin >> n;
    Vowel(n);
    return 0;
}
