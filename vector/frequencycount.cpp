#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {64, 2, 2, 6, 6, 6, 1, 11, 1, 1};
    map<int, int> m;

    for (auto x : v)
    {
        m[x]++;
    }
    for (auto x : m)
    {
        cout << x.first << "->" << x.second << endl;
    }
    return 0;
}