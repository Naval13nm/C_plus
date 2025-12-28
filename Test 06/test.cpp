#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// q1
vector<int> sortedarray(vector<int> nums)
{
    vector<int> ans;
    for (auto x : nums)
    {
        if (x < 0)
        {
            ans.push_back(x);
        }
    }
    for (auto x : nums)
    {
        if (x >= 0)
        {
            ans.push_back(x);
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {-1, 3, -2,44444444};
    nums = sortedarray(nums);
    for (auto x : nums)
    {
        cout << x << " ";
    }
    return 0;
}