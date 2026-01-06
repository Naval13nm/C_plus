#include <bits/stdc++.h>
using namespace std;

void StrictlyInc(vector<int> &v, int n)
{
    if (n == v.size()-1)
    {
        cout << "strictly incr";
        return;
    }
    if (v[n + 1] != v[n] + 1)
    {
        cout << "not strc incr";
        return;
    }
    StrictlyInc(v, n + 1);
}

int main()
{

    vector<int> v = {1, 2, 3, 4, 5};
    StrictlyInc(v, 0);

    return 0;
}