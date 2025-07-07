#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << "Lowercase Alphabet";
    } else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Uppercase Alphabet";
    }
     else{
        cout << "Not Alphabet";
    }

    return 0;
}
