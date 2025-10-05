// #include <iostream>
// #include <vector>
// #include <set>
// #include <algorithm>
// using namespace std;

// void Reverse(vector<int> v)
// {

//         for (int i = v.size(); i>0; i--)
//         {
//            cout<<" "<<v[i-1];

//         }
// }

// void sortvector(vector<int>&v){
//     sort(v.begin(),v.end());
//     for(auto x:v){
//         cout<<x<<" ";
//     }
// }

// int main()
// {

//     // take input if + cll reverse fx and reverse vector else cll sort fx

//     int n = -2;
//     vector<int> v = {1, 2, 8, 4, 5} ;
//     if (n >= 0)
//     {
//         Reverse(v);
//     }
//     else{
//         sortvector(v);
//     }

//     return 0;
// }

// 2nd method sir ka bheja hua

#include <bits/stdc++.h>
using namespace std;

void reversevector(vector<int> &v)
{
    reverse(v.begin(), v.end());
    for (auto x : v)
    {
        cout << x << " ";
    }
}
void sortvector(vector<int> &v)
{
    sort(v.begin(), v.end());
    for (auto x : v)
    {
        cout << x << " ";
    }
}
int main()
{
    vector<int> v = {9, 2, 34, 56, 90};
    int value;
    cout << "enter value ";
    cin >> value;
    if (value > 0)
    {
        reversevector(v);
    }
    else
    {
        sortvector(v);
    }
}



