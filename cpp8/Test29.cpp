#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// void Largest(vector<int>v){
//  // vector<int>v={12,5,20,8,15};
//     int first=-1;
//     int second=-1;
//     int third=-1;

//     if (v.size()<3)
//     {
//         cout<<"not found";
//     }

//     for (int  i = 0; i <v.size(); i++)
//     {
//         if (v[i]>first)
//         {
//             second=first;
//             first=v[i];
//         }

//         else if (first>v[i]&&v[i]>second)
//         {
//             third=second;
//             second=v[i];
//         }

//         else if(second>v[i]&&v[i]>third){
//             third=v[i];
//         }

//     }
//     cout<<third;

// }

// 2nd question

// void EvenOddCount(vector<int> v)
// {
//     int positive = 0;
//     int negative = 0;

//     for (auto x : v)
//     {
//         if (x % 2 == 0)
//         {
//             positive++;
//         }
//         else
//         {
//             negative++;
//         }
//     }

//     if (positive > negative)
//     {
//         cout << "even";
//     }
//     else if (negative > positive)
//     {
//         cout << "odd";
//     }
//     else
//         cout << "equal";
// }

// 3rd question

// void UseSet(vector<int>v){
//     set<int>s={};

//     for(auto x:v){
//         s.insert(x);
//     }

//     for(auto x:s){
//         cout<<x;
//     }

// }

// 3.2

// void UseMap(vector<int>v){
//     map<int,int>m={};

//     for(auto x:v){
//        m[x]++;
//     }

//     for(auto x:m){
//         cout<<x.first;
//     }

// }

// 3.3

void WhileMethod(vector<int> v)
{

    int i = 0;

    while (i < v.size())
    {
        int j = i + 1;
        while (j < v.size())
        {
            if (v[i] == v[j])
            {
                v.erase(v.begin() + j);
            }
            else
            {
                j = j + 1;
            }
        }
        i = i + 1;
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << " " << v[i];
    }
}

int main()
{

    //    Largest({12,5,20,8,15});

    // EvenOddCount({11, 13, 15, 17});

    // UseSet({4,5,9,4,9,2,2,7});

    // UseMap({4,5,9,4,9,2,2,7});

    WhileMethod({4, 5, 9, 4, 9, 2, 2, 7});

    return 0;
}