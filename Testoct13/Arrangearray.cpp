#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    vector<int> v = {
        10,
        20,
        30,
        40,
    };
    vector<int> ans;

    vector<int> arr1;
    vector<int> arr2;

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size() / 2; i++)
    {
        arr1.push_back(v[i]);
    }

    for (int i = v.size() - 1; i >= v.size() / 2; i--)
    {
        arr2.push_back(v[i]);
    }

    // for(auto x:arr1){
    //     cout<<x;
    // }

    int Smallest = min(arr1.size(), arr2.size());
    for (int i = 0; i < Smallest; i++)
    {
        ans.push_back(arr2[i]);
        ans.push_back(arr1[i]);
    }
    if (arr1.size() > arr2.size())
    {
        ans.push_back(arr1[arr1.size() - 1]);
    }
    else if (arr1.size() < arr2.size())
    {
        ans.push_back(arr2[arr2.size() - 1]);
    }


    // for (auto x : ans)
    // {
    //     cout << " " << x;
    // }

    //if wants output in original vector we can clear it using v.clear()

    v.clear();
    v=ans;
     for (auto x : v)
    {
        cout << " " << x;
    }


    return 0;
}