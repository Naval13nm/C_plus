#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

// q1 distinct elment
// int countDistinct(vector<int> nums)
// {
//     set<int> UniqueElements;
//     int count = 0;
//     for (auto x : nums)
//     {
//         UniqueElements.insert(x);
//     }
//     for (auto x : UniqueElements)
//     {
//         count++;
//     }
//     return count;
// }

// q2 Count k diff pairs
// int countKDiffPairs(vector<int> nums, int k)
// {
//     sort(nums.begin(), nums.end());
//     int StPt = 0;
//     int count = 0;
//     int Secpt=1;
//     while (Secpt < nums.size())
//     {
//        if (StPt==Secpt||nums[Secpt]-nums[StPt]<k)
//        {
//         Secpt++;
//        }
//        else if (nums[Secpt]-nums[StPt]>k)
//        {
//         StPt++;
//        }
//        else{
//         count++;
//         StPt++;
//         while (StPt<nums.size() && nums[StPt]==nums[StPt-1])
//         {
//             StPt++;
//         }

//        }

//     }
//     return count;
// }

// q3 majority elem n/3
//  void majorityElementNby3(vector<int>nums)
//  {
//      map<int,int>m;
//      for(auto x: nums){
//          m[x]++;
//      }
//      for(auto x: m){
//          if (x.first>m.size()/3)
//          {
//              cout<<x.second<<" ";
//          }

//     }

// }
void ReverseString(string Name)
{
    int left = 0;
    int Right = Name.size() - 1;
    while (left < Right)
    {
        swap(Name[left], Name[Right]);
        left++;
        Right--;
    }
    cout << Name;
}
int main()
{
    // vector<int> nums = {4,4,4,4};
    // int k = 0;
    // cout << countDistinct(nums);
    // cout << countKDiffPairs(nums, k);
    // majorityElementNby3(nums);
    string Name = "Naval";
    ReverseString(Name);

    return 0;
}