#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {22, 4, 5, 5, 1, 5};

    int Lar = INT_MIN;
    int SLar = INT_MIN;

    for (auto x : v)
    {
        if (x > Lar)
        {
            SLar = Lar;
            Lar = x;
        }
        else if (x < Lar && x > SLar)
        {
            SLar = x;
        }
    }

    if (SLar == INT_MIN)
    {
        return -1;
    }

    else
    {
        cout << SLar << endl;
    }

    return 0;
}