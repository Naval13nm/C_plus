// Input: nums = [1,2,3,4]
// Output: [1,3,6,10]
// Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].

#include <bits/stdc++.h>
using namespace std;

int main()
{

    // approch 1 using another arr
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> ans(v.size());
    ans[0] = v[0];

    for (int i = 1; i < v.size(); i++)
    {
        ans[i] = v[i] + ans[i - 1];
    }

    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;

    // approch 2 using same arr with one sum var
    // int sum = 0;
    // for (auto &x : v)
    // {
    //     sum = sum + x;
    //     x = sum;
    // }

    // for (auto x : ans)
    // {
    //     cout << x << " ";
    // }

    // approch 3 using same arr but without using another var

    // cout << v[0] << " ";

    // for (int i = 1; i < v.size(); i++)
    // {
    //     v[i] = v[i] + v[i - 1];
    //     cout << v[i] << " ";
    // }

    // approch 4 worst approch using two loops

    // vector<int> DoubleApproch;

    // for (int i = 0; i < v.size(); i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j <= i; j++)
    //     {
    //         sum = sum + v[j];
    //     }
    //     DoubleApproch.push_back(sum);
    // }
    // for (auto x : DoubleApproch)
    // {
    //     cout << x << " ";
    // }

}