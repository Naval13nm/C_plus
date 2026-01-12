#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {-64, 2, 56, 6, 6, -6} ;
    int small = INT_MAX;
    int Ssmall = INT_MAX;
    for (auto x : v)
    {
        if (x < small)
        {
            Ssmall = small;
            small = x;
        }
        else if (x > small && x < Ssmall)
        {
            Ssmall = x;
        }
    }
    if (Ssmall == INT_MAX)
        return -1;
    else
    {
        cout << Ssmall;
    }
    return 0;
}