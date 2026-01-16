// leetcode 1929

// Given an integer array nums of length n, you want to create an array ans of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).

// Specifically, ans is the concatenation of two nums arrays.

// Return the array ans.

// Example 1:

// Input: nums = [1,2,1]
// Output: [1,2,1,1,2,1]
// Explanation: The array ans is formed as follows:
// - ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
// - ans = [1,2,1,1,2,1]

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 1};
    // vector<int> ans(nums.size() * 2);
    // int i = 0;
    // for (auto x : nums)
    // {
    //     ans[i] = x;
    //     ans[nums.size() + i] = x;
    //     i++;
    // }
    // for (auto x : ans)
    // {
    //     cout << x << " ";
    // }

    cout << endl;

    // approch 2 using stl functions like insert and declaration of vector using begin and end//////////////

    // vector.insert(position, value);
    // vector.insert(position, count, value); count=3 means insert value three times v.begin()+2 means st insert from 2th index ;
    // vector.insert(position, first_iterator, last_iterator);

    vector<int> ans2(nums.begin(), nums.end());
    ans2.insert(ans2.end(), nums.begin(), nums.end());

    for (auto x : ans2)
    {
        cout << x << " ";
    }

    cout << endl;

////approch 3 using int counter ;///////////

    // int counter = 0;

    // vector<int> ans3(nums.size() * 2);
    // for (auto x : nums)
    // {
    //     ans3[counter] = x;
    //     counter++;
    // }
    // for (auto x : nums)
    // {
    //     ans3[counter] = x;
    //     counter++;
    // }
    // for (auto x : ans3)
    // {
    //     cout << x << " ";
    // }

    return 0;
}