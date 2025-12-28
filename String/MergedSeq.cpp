#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Hello";
    string w = "HelLo";
    string q;

    int n1 = s.size();
    int n2 = w.size();
    int maxLen = max(n1, n2);

    for (int i = 0; i < maxLen; i++)
    {
        if (i < n1)
            q.push_back(s[i]); // take from s
        if (i < n2)
            q.push_back(w[i]); // take from w
    }

    cout << q << endl;

    return 0;
}
