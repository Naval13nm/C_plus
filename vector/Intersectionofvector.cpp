#include <bits/stdc++.h>
using namespace std;

int main()

{

    vector<int> v1 = {3, 0, 1, 0, 5, 2};
    vector<int> v2 = {5, 661, 0, 5, 2};

    /// using map///////////

    // map<int, int> m;

    // for (auto x : v1)
    // {
    //     m[x]++;
    // }
    // for (auto x : v2)
    // {
    //     m[x]++;
    // }
    // for (auto x : m)
    // {
    //     if (x.second >= 2)
    //     {
    //         cout << x.first << " ";
    //     }
    // }

    // using two loops

    // set<int> s;

    // for (int i = 0; i < v1.size(); i++)
    // {
    //     for (int j = 0; j < v2.size(); j++)
    //     {
    //         if (v1[i] == v2[j])
    //         {
    //             s.insert(v1[i]);
    //         }
    //     }
    // }

    // for (auto x : s)
    // {
    //     cout << x << " ";
    // }

    /// using unordered set for time comple 0(1) gives speed we can also use ordered set  using count property which is present in sets and maps only not in vector queue deque etc which will tell whether elment is prresent or not in set and syntex is set_Name.count(value to be checked comes inside it ) count(x) checks if element exists in set (returns 0 or 1 but doesn't return bool type behvaes like them in if else) 

    unordered_set<int> s(v1.begin(), v1.end());
    unordered_set<int> result;

    for (auto x : v2)
    {

        if (s.count(x)==1)
        {
            result.insert(x);
        }
    }

    for (auto x : result)
    {
        cout << x << " ";
    }

    return 0;
}
