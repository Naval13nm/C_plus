#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> m;
        map<char,int> n;

        for (auto x : s) m[x]++;
        for (auto x : t) n[x]++;

        vector<char> keys;
        for (auto p : m) keys.push_back(p.first);

        for (int i = 0; i < keys.size(); i++) {
            char key = keys[i];
            if (m[key] != n[key]) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    Solution sol;
    string s = "anagram", t = "nagaram";

    if (sol.isAnagram(s, t))
        cout << "true\n";
    else
        cout << "false\n";

    return 0;
}


//2nd method 
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if (s.size() != t.size()) return false; // quick check

//         map<char, int> m;
//         map<char, int> n;

//         for (char x : s) m[x]++;
//         for (char x : t) n[x]++;

//         // Compare both maps directly
//         return m == n;
//     }
// };
