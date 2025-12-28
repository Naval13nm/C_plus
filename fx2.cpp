#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <set>
using namespace std;

// int evenSumm(vector<int> v1, vector<int> v2)
// {

//     int count = 0;
//     for (auto x : v1)
//     {
//         if (x % 2 == 0)
//         {
//             count++;
//         }
//     }
//     for (auto x : v2)
//     {
//         if (x % 2 == 0)
//         {
//             count++;
//         }
//     }
//     return count;
// }

// int evenSumm(vector<string> v1, vector<string> v2)
// {

//     int count = 0;
//     for (auto x : v1)
//     {
//         if (x=="a"||x=="e"||x=="i"||x=="o"||x=="u")
//         {
//             count++;
//         }
//     }
//     for (auto x : v2)
//     {
//           if (x=="a"||x=="e"||x=="i"||x=="o"||x=="u")
//         {
//             count++;
//         }
//     }
//     return count;
// }

// int evenSumm(vector<int> v1, vector<int> v2)
// {

//     int count = v1[0];
//     for (auto x : v1)
//     {
//         if (count<x)
//         {
//             count=x;
//         }
//     }
//     for (auto x : v2)
//     {
//        if (count<x)
//         {
//             count=x;
//         }
//     }
//     return count/2;
// }

// 5thq

// int evenSumm(vector<int> v1, vector<int> v2)
// {
// set<int>s1;
// int count=0;
//     for (auto x : v1)
//     {
//         s1.insert(x);
//     }
//     for (auto x : v2)
//     {
//       s1.insert(x);
//     }
//     for(auto x:s1){
//         count=x+count;
//     }
//     return count;
// }

// 6th

// int evenSumm(vector<int> v1, vector<int> v2)
// {
//     int count = 0;
//     int size = v1.size() + v2.size();
//     for (auto x : v1)
//     {
//         count = x + count;
//     }
//     for (auto x : v2)
//     {
//         count = x + count;
//     }
//     count = count / size;
//     return count;
// }

// 7th

// bool isPrime(int x)
// {
//     if (x < 2) return false;
//     for (int i = 2; i * i <= x; i++)
//         if (x % i == 0)
//             return false;
//     return true;
// }

// int evenSumm(vector<int> v1, vector<int> v2)
// {
//     int count = 0;

//     for (int x : v1)
//         if (isPrime(x)) count++;

//     for (int x : v2)
//         if (isPrime(x)) count++;

//     return count;
// }


int main()
{
    vector<int> v1 = {1, 2, 2, 2};
    vector<int> v2 = {6, 45, 2, 6};
    // vector<string>v1={"a","e","i","q","a"};
    // vector<string>v2={"k","l","m","n","u"};
    int sum = evenSumm(v1, v2);
    cout << sum;
    return 0;
}