#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {64, 2, 2, 6, 6, 6, 1, 11, 1, 1};
    map<int,int> m;
    set<int>s;

    for (auto x : v)
    {
        s.insert(x);
    }
    for (auto x : s)
    {
        cout << x<< endl;
    }
    cout<<endl;

    for (auto x : v)
    {
        m[x]++;
    }


    for(auto x: m){
        cout<<x.first<<endl;
    }

    return 0;
}