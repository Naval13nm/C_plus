// print unique values which comoes ones only in arr;
#include <bits/stdc++.h>
using namespace std;

int main()

{

    vector<int> v = {3, 0, 1, 2, 0, 0, 3, 3, 2, 21, 1, 6, 3, 35, 59};
    map<int, int> m;

    for (auto x : v)
    {
        m[x]++;
    }

    for (auto x : m)
    {
        if (x.second == 1)
        {
            cout << x.first << " ";
        }
    }

    return 0;
}
