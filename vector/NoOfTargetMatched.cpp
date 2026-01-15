// print no of value that matches with the target  arr;

#include <bits/stdc++.h>
using namespace std;

int main()

{
    vector<int> v = {2, 4, 6, 9, 5, 3};
    int target = 11;
    int matched = 0;

    // 1st methhod///////////////////////

    // for (int i = 0; i < v.size(); i++)
    // {
    //     for (int j = i+1; i <v.size(); j++)
    //     {
    //         if(v[i]+v[j]==target){
    //             matched++;
    //         }
    //     }

    // }

    // cout<<matched;

    ////2nd method//////////////////////////////

    // sort(v.begin(), v.end());
    // int i = 0;
    // int j = v.size() - 1;

    // while (i < j)
    // {
    //     int sum = v[i] + v[j];

    //     if (sum == target)
    //     {
    //         matched++;
    //         i++;
    //         j--;
    //     }

    //     else if (sum > target)
    //     {
    //         j--;
    //     }

    //     else
    //     {
    //         i++;
    //     }
    // }

    // cout << matched;

    /// using for loop////////////////////////////

    sort(v.begin(), v.end());
    int j = v.size() - 1;
    for (int i = 0; i < j; i++)
    {
        int sum = v[i] + v[j];

        if (sum == target)
        {
            matched++;
            j--;
        }

        else if (sum > target)
        {
            j--;
        }
    }

    cout << matched;

    return 0;
}
