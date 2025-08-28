#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>arr={
        {1,23,4,5},
        {78,8,9,6},
        {85,78,96,58,9}
    } ;
    for(auto v:arr)
    {
       for(auto it:v)
       {
           cout<<it<<" ";
       }
       cout<<"\n";
    }
}