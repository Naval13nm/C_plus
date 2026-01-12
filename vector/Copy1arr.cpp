#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {64, 2, 2, 6, 6, 6, 1, 11, 1, 1};
    // vector<int>s=v;
    vector<int>s;


    for (auto x : v)
    {
        s.push_back(x);
    }
    for (auto x : s)
    {
        cout << x<<" ";
    }

    return 0;
}