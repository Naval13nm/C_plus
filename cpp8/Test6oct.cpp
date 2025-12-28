#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

// void SecondSmallest(vector<int> n)
// {
//     int smallest = INT_MAX;
//     int second = INT_MAX;
//     for (auto x : n)
//     {
//         if (x < smallest)
//         {
//             second = smallest;
//             smallest = x;
//         }
//         else if (smallest < x && x < second)
//         {
//             second = x;
//         }
//     }

//     if (second == INT_MAX)
//     {
//         cout << "not found";
//     }

//     else
//     {
//         cout << second;
//     }
// }



// 2nd

// void Krotation(vector<int>v){
//     cout << "enter k" << endl;
//     int k;
//     cin >> k;
//     k = k % v.size();

//     vector<int> temp(k);
//     for (int i = 0; i < k; i++)
//     {
//         temp[i] = v[v.size() - k + i];
//     }

//     for (int i = v.size() - k - 1; i >= 0; i--)
//     {
//         v[i + k] = v[i];
//     }

//     for (int i = 0; i < k; i++)
//     {
//         v[i] = temp[i];
//     }

//     for (auto x : v)
//     {
//         cout << x;
//     }


// }


    
//  3rd rotation


int main()
{

    // SecondSmallest({7, 7, 7, 7, 7});
    // Krotation({1, 2, 3, 4, 5});

    vector<int>
    return 0;
}