

// 1st approach

// vector<vector<int>> v = {{1, 2, 3}, {4, 5, 0}, {7, 0, 9}};
//    for(auto x:v){
//     for(auto x:x){
//         cout<<x;
//     }
//     cout<<" ";
//    }

// 2nd approach to print 2d arr

// int row=v.size();
// int col=v[0].size();

// for (int i = 0; i < v.size(); i++)
// {
//     for (int j = 0; j < v[0].size(); j++)
//     {
//         if (v[i][j] == 0)
//         {
//             cout << i << " " << j<<endl;
//         }
//     }

// }

// q2 count no of zeros

// vector<vector<int>> v = {{1, 2, 3}, {4, 5, 0}, {7, 0, 9}};

// int count = 0;

// for (int i = 0; i < v.size(); i++)
// {
//     for (int j = 0; j < v[0].size(); j++)
//     {
//         if (v[i][j] == 0)
//         {
//             count++;
//         }
//     }
// }
// cout << count;

// q3 replace negative with zero

// vector<vector<int>> v = {{1, -2, 3}, {-4, 5, 0}, {7, 0, -9}};

// for (int i = 0; i < v.size(); i++)
// {
//     for (int j = 0; j < v[0].size(); j++)
//     {
//         if (v[i][j] < 0)
//         {
//             v[i][j] = 0;
//         }
//     }
// }

// for (auto x : v)
// {
//     for (auto x : x)
//     {
//         cout << x;
//     }
//     cout << endl;
// }
// for (int i = 0; i < v.size(); i++)
// {
//     for (int j = 0; j < v[0].size(); j++)
//     {
//         cout << v[i][j];
//     }
//     cout << endl;
// }

// 4th q
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    vector<vector<int>> v = {{1, -2, 3}, {-4, 0, 3}, {7, 5, -9}};
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            if (v[i][j] == 0)
            {

                for (int m = 0; m < v[0].size(); m++)
                {
                    v[i][m] = 0;
                }

                for (int n = 0; n < v.size(); n++)
                {
                    v[n][j] = 0;
                }
            }
        }
    }
    for (auto x : v)
    {
        for (auto x : x)
        {
            cout << x;
        }
        cout << endl;
    }

    return 0;
}