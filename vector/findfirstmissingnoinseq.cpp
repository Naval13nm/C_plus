#include <bits/stdc++.h>
using namespace std;

int main()

{
// approch 1 sumofseq-sumofarr=missing no;////////

    //  vector<int> v = {3,0,2,1,5};
    //  int sum=0;
    //  int sumarr=0;

    // for(auto x:v){
    //     sumarr=x+sumarr;
    // }

    // for (int i = 0; i <=v.size(); i++)
    // {
    //    sum=sum+i;
    // }

    // cout<<sum-sumarr;

/// another approch using maths n*n+1/2 best approch///////

    // vector<int> v = {3,0,2,1,5};
    // int sum=(v.size()*(v.size()+1))/2;
    // int sumarr=0;
    // for(auto x:v){
    //     sumarr=x+sumarr;
    // }

    // cout<<sum-sumarr;


// third without any formulas;////////////

    vector<int> v = {3, 0, 2, 1, 5};
    sort(v.begin(), v.end());
    int i = 0;
    while (i <= v.size())
    {
        if (v[i] == i)
        {
            i++;
        }
        else
        {
            cout << i;
            break;
        }
    }

    return 0;
}
