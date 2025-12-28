#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;

// q1
//  int LowerTriangleSum(vector<vector<int>> v)
//  {
//      int sum = 0;
//      for (int i = 0; i < v.size(); i++)
//      {
//          for (int j = 0; j <= i; j++)
//          {
//              sum = sum + v[i][j];
//          }
//      }
//      return sum;
//  }

// q2
// void MapEvenOddIndex(vector<int> v)
// {
//     map<int, int> m;
//     vector<int> even;
//     vector<int> odd;

//     for (auto x : v)
//     {
//         if (x % 2 == 0)
//         {
//             even.push_back(x);
//         }
//         else
//         {
//             odd.push_back(x);
//         }
//     }

//     int evenIndex = 0;
//     int oddIndex = 0;
//     int mapIndex = 0;

//     while (evenIndex < even.size() || oddIndex < odd.size())
//     {

//         if (evenIndex < even.size())
//         {
//             m[mapIndex] = even[evenIndex];
//             mapIndex++;
//             evenIndex++;
//         }

//         if (oddIndex < odd.size())
//         {
//             m[mapIndex] = odd[oddIndex];
//             mapIndex++;
//             oddIndex++;
//         }
//     }

//     for (auto x : m)
//     {
//         cout << x.second << " ";
//     }
// }

// q3
// void UniqueSet(vector<int> v1, vector<int> v2)
// {
//     map<int, int> m;
//     vector<int> Unique;
//     for (auto x : v1)
//     {
//         m[x]++;
//     }
//     for (auto x : v2)
//     {
//         m[x]++;
//     }
//     for (auto x : m)
//     {
//         if (x.second == 1)
//         {
//             Unique.push_back(x.first);
//         }
//     }
//     for (auto x : Unique)
//     {
//         cout << x << " ";
//     }
// }

int main()
{
    // vector<vector<int>> v = {
    //     {1, 2, 3}, {2, 3, 4}, {3, 4, 5}};
    // cout << LowerTriangleSum(v);

    //q2

    // vector<int> v = {10, 81, 6, 5, 3, 1};
    // MapEvenOddIndex(v);

    //q3

    // vector<int> v1 = {1, 2, 3, 4};
    // vector<int> v2 = {2, 3, 5, 6};
    // UniqueSet(v1, v2);

    return 0;
}