#include <bits/stdc++.h>
using namespace std;

int main()

{

    /// first wayy///////////////////

    vector<int> v = {3, 0, 1, 0, 0, 5, 3};
    vector<int> q;

    for (auto x : v)
    {
        if (x != 0)
        {
            q.push_back(x);
        }
    }

    // for inserting non zeros value in v ;

    int i = 0;

    for (auto x : q)
    {
        v[i] = x;
        i++;
    }

    // for inserting zeroes at left space or remainig space
    i++;

    while (i < v.size())
    {
        v[i] = 0;
        i++;
    }

    // for print the output on the screen

    for (auto x : v)
    {
        cout << x << " ";
    }

    cout << endl;

    ///////// 2nd way///////////////////////////
    cout << "2nd way : ";
    vector<int> d(v.size(), 0);
    int pointer = 0;

    for (auto x : v)
    {
        if (x != 0)
        {
            d[pointer] = x;
            pointer++;
        }
    }

    for (auto x : d)
    {
        cout << x << " ";
    }
    return 0;
}








// 3rd way

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int count = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] == 0)
//         {
//             nums.erase(nums.begin() + i);
//             count++;
//             i--;
//         }
//     }
    

//         for(int i=1; i<=count; i++){
//             nums.push_back(0);
//         }
//     }
    
// };