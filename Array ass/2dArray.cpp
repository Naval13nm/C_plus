#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // print 2d matrix elements using for auto and for loop

    // for (auto x : v)
    // {
    //     for (auto y : x)
    //     {
    //         cout << y;
    //     }
    //     cout<<endl;
    // }

    // for(int i=0; i<v.size(); i++){
    //     for (int j = 0; j <v[0].size(); j++)
    //     {
    //         cout<<v[i][j];
    //     }
    //     cout<<endl;

    // }

    // q1 to count the number of zeroes and one in the 2d array

    // vector<vector<int>> v = {{1, 0, -1, 9, 0}, {-1, 3, 0, 6, 2}, {2, 4, -1, 4, -1}, {0, 1, 3, -21, 7}};
    // int count = 0;

    // for (int i = 0; i < v.size(); i++)
    // {
    //     for (int j = 0; j < v[0].size(); j++)
    //     {
    //         if (v[i][j] == 0 || v[i][j] == -1)
    //         {
    //             count++;
    //         }
    //     }
    // }
    // cout << count;

    // q2 chng all -1 to 0

    // vector<vector<int>> v = {{-1, 2, 3, 0, 1, -1}, {6, 0, 3, -1, 0, 0}, {-1, 0, 4, 93, 9, -1}};

    // for (int i = 0; i < v.size(); i++)
    // {
    //     for (int j = 0; j < v[0].size(); j++)
    //     {
    //         if (v[i][j] == -1)
    //         {
    //             v[i][j] = 0;
    //         }
    //     }
    // }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     for (int j = 0; j < v[0].size(); j++)
    //     {
    //         cout << v[i][j];
    //     }
    //     cout << endl;
    // }

    // q3  find largest in row and retrun row of ;largest

    // vector<vector<int>> v = {{3, 9, 4}, {10, 6, 2}, {8, 14, 99}};
    // vector<int> ans;

    // for (int i = 0; i < v.size(); i++)
    // {
    //     int max = INT_MIN;
    //     for (int j = 0; j < v[0].size(); j++)
    //     {
    //         if (max < v[i][j])
    //         {
    //             max = v[i][j];
    //         }
    //     }
    //     ans.push_back(max);
    // }

    // for (auto x : ans)
    // {
    //     cout << x << endl;
    // }

    // q4 search element in arr
    // vector<vector<int>> v = {{3, 9, 4}, {10, 6, 2}, {8, 14, 99}};
    // int search = 999;

    // for (int i = 0; i < v.size(); i++)
    // {

    //     for (int j = 0; j < v[0].size(); j++)
    //     {
    //         if (search == v[i][j])
    //         {
    //           cout << "v[" << i << "," << j << "]";

    //             return 0;
    //         }

    //     }
    // }

    // q5 sum of each row and col
    //     vector<vector<int>> v = {{3, 9, 4}, {10, 6, 2}, {8, 14, 99}};
    //     int sum = 0;
    //    vector<vector<int>>ans;
    // row sum

    // for (int i = 0; i < v.size(); i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < v[0].size(); j++)
    //     {
    //         sum = v[i][j] + sum;
    //     }
    //     cout << sum << endl;
    // }
    // // col sum

    // for (int j = 0; j < v[0].size(); j++)
    // {
    //     int sum = 0;
    //     for (int i = 0; i < v.size(); i++)
    //     {
    //         sum = v[i][j] + sum;
    //     }
    //     cout << sum << endl;
    // }

    // q6 transpose of matrix

    // 1st way
    // vector<vector<int>> v = {{3, 9, 4}, {10, 6, 2}, {8, 14, 99}};
    // vector<vector<int>> ans;
    // for (int j = 0; j < v[0].size(); j++)
    // {

    //     vector<int> temp;
    //     for (int i = 0; i < v.size(); i++)
    //     {
    //         temp.push_back(v[i][j]);
    //     }
    //     ans.push_back(temp);
    // }
    // for (int i = 0; i < v.size(); i++)
    // {

    //     for (int j = 0; j < v[0].size(); j++)
    //     {
    //         cout << ans[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // 2nd way
    //  vector<vector<int>> v = {{3, 9, 4}, {10, 6, 2}, {8, 14, 99}};
    //      vector<vector<int>> ans(v[0].size(),vector<int>(v.size()));
    //      for (int i= 0; i < v.size(); i++)
    //      {
    //          for (int j = 0; j < v[i].size(); j++)
    //          {
    //             ans[j][i]=v[i][j];
    //          }
    //      }
    //      for (int i = 0; i < ans.size(); i++)
    //      {

    //         for (int j = 0; j < ans[0].size(); j++)
    //         {
    //             cout << ans[i][j] << " ";
    //         }
    //         cout << endl;
    //     }

    // 3rd way  smart wway
    //   vector<vector<int>> v = {{3, 9, 4}, {10, 6, 2}, {8, 14, 99}};

    //     for (int i= 0; i < v.size(); i++)
    //     {
    //         for (int j = 0; j < v[i].size(); j++)
    //         {
    //            cout<<v[j][i]<<" ";
    //         }
    //         cout<<endl;
    //     }

    // q find first 2  index in evry row

    // vector<vector<int>> v = {{3, 9, 4}, {10, 6, 2}, {8, 2, 99}};
    // // in row
    // for (int i = 0; i < v.size(); i++)
    // {
    //     for (int j = 0; j < v[0].size(); j++)
    //     {
    //         if (v[i][j] == 2)
    //         {
    //             cout << i << ',' << j << " ";
    //             break;
    //         }
    //     }
    //     cout << endl;
    // }
    // in columnm
    // for (int j = 0; j < v[0].size(); j++)
    // {
    //     for (int i = 0; i < v.size(); i++)
    //     {
    //         if (v[i][j] == 2)
    //         {
    //             cout << i << ',' << j << " ";
    //             break;
    //         }
    //     }
    //     cout << endl;
    // }

    // q total even and odd

    // vector<vector<int>> v = {{3, 9, 4}, {10, 6, 2}, {8, 2, 99}};
    // int EvenCount = 0;
    // int Oddcount = 0;
    // for (int i = 0; i < v.size(); i++)
    // {

    //     for (int j = 0; j < v[0].size(); j++)
    //     {

    //         if (v[i][j] % 2 == 0)
    //         {
    //             EvenCount++;
    //         }
    //         else
    //         {
    //             Oddcount++;
    //         }
    //     }
    // }
    // cout << EvenCount;
    // cout << endl;
    // cout << Oddcount;


 // q find max row sum and col sum
    // vector<vector<int>> v = {{3, 988, 4}, {10, 6, 2}, {8, 2, 99}};
    // int RowSum = INT_MIN;
    // int ColSum = INT_MIN;
// // for row
    // for (int i = 0; i < v.size(); i++)
    // {
    //     int tempSum = 0;
    //     for (int j = 0; j < v[0].size(); j++)
    //     {
    //         tempSum = tempSum + v[i][j];
    //     }
    //     if (RowSum < tempSum)
    //     {
    //         RowSum = tempSum;
    //     }
    // }
    // for col
    // for (int j = 0; j < v[0].size(); j++)
    // {
    //     int tempSum = 0;
    //     for (int i = 0; i < v.size(); i++)
    //     {
    //         tempSum = tempSum + v[i][j];
    //     }
    //     if (ColSum < tempSum)
    //     {
    //         ColSum = tempSum;
    //     }
    // }

    // cout << RowSum << endl;
    // cout << ColSum;


// Q count elment greater then the given no
    // vector<vector<int>> v = {{3, 988, 4}, {10, 6, 2}, {8, 2, 99}};
    // int GivenNo = 5;
    // int count = 0;

    // for (int i = 0; i < v.size(); i++)
    // {
    //     for (int j = 0; j < v[0].size(); j++)
    //     {
    //         if (GivenNo < v[i][j])
    //         {
    //             count++;
    //         }
    //     }
    // }
    // cout<<count;



 // q find no of negative and positive value in a mtx

    // vector<vector<int>> v = {{3, -988, 4}, {-10, 6, 2}, {-8, 2, -99}};
    // int PositiveNoCount = 0;
    // int NegativeCount = 0;

    // for (int i = 0; i < v.size(); i++)
    // {
    //     for (int j = 0; j < v[0].size(); j++)
    //     {
    //         if (v[i][j] < 0)
    //         {
    //             NegativeCount++;
    //         }

    //         else if (v[i][j] == 0)
    //         {
    //             continue;
    //         }
    //          else
    //         {
    //             PositiveNoCount++;
    //         }
    //     }
    // }
    // cout << PositiveNoCount<<endl;
    // cout<<NegativeCount;



 // q prime no

    // vector<vector<int>> v = {{3, -988, 4}, {-10, 6, 2}, {-8, 2, -99}};
    // int PrimeCount = 0;

    // for (int i = 0; i < v.size(); i++)
    // {
    //     for (int j = 0; j < v[0].size(); j++)
    //     {

    //         if (v[i][j] < 2)
    //         {
    //             continue;
    //         }

    //         else
    //         {
    //             int count = 0;
    //             for (int y = 2; y * y <= v[i][j]; y++)
    //             {
    //                 if (v[i][j] % y == 0)
    //                 {
    //                     count++;
    //                     break;
    //                 }
    //             }
    //             if (count == 0)
    //             {
    //                 PrimeCount++;
    //             }
    //         }
    //     }
    // }
    // cout << PrimeCount << endl;


// q find min elemnets in each col and row

 vector<vector<int>> v = {{3, 988, 4}, {10, 6, 2}, {8, 2, 99}};
    int RowSum = INT_MAX;
    int ColSum = INT_MAX;
// for row
    for (int i = 0; i < v.size(); i++)
    {
        int tempSum = 0;
        for (int j = 0; j < v[0].size(); j++)
        {
            tempSum = tempSum + v[i][j];
        }
        if (RowSum > tempSum)
        {
            RowSum = tempSum;
        }
    }
    // for col
    for (int j = 0; j < v[0].size(); j++)
    {
        int tempSum = 0;
        for (int i = 0; i < v.size(); i++)
        {
            tempSum = tempSum + v[i][j];
        }
        if (ColSum > tempSum)
        {
            ColSum = tempSum;
        }
    }

    cout << RowSum << endl;
    cout << ColSum;


    return 0;
}