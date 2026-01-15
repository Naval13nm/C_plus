#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3};
    vector<int> x = {4, 5, 6};
    vector<int> w;

    for (auto x : v)
    {
        w.push_back(x);
    }

    for (auto x : x)
    {
        w.push_back(x);
    }

    for (auto x : w)
    {
        cout << x << " ";
    }

    return 0;
}
