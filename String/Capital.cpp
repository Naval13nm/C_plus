//leetcode 520

// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     string s = "Hdwd";
//     int count = 0;

//     for (auto x : s)
//     {
//         if (x >= 'A' && x <= 'Z')
//         {
//             count++;
//         }
//     }

//     if (count == s.size())
//     {
//         cout << "true";
//         return 0;
//     }
//     else if (count == 1 && s[0] >= 'A' && s[0] <= 'Z')
//     {
//         cout << "true" ;
//         return 0;
//     }

//     else if (count==0)
//     {

//         cout << "true";
//         return 0;
//     }
//     else
//     {
//         cout << "false";
//     }
//     return 0;
// }



#include <iostream>
#include <string>
using namespace std;

bool detectCapitalUse(string word) {
    int n = word.size();
    int capitalCount = 0;

    // Count uppercase letters
    for (int i = 0; i < n; i++) {
        if (word[i] >= 'A' && word[i] <= 'Z') {
            capitalCount++;
        }
    }

    // Three valid cases
    if (capitalCount == n) return true;      // All capitals
    if (capitalCount == 0) return true;      // All lowercase
    if (capitalCount == 1 && word[0] >= 'A' && word[0] <= 'Z') return true; // Only first letter capital

    return false; // Otherwise, invalid
}

int main() {
    string word;
    cin >> word;

    if (detectCapitalUse(word)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
