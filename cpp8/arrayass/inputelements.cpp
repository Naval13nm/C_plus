#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main()
{

    // q1

    // int n=5;
    // vector<int> v = {};

    // for (int i = 0; i <n; i++)
    // {
    //     int value;
    //     cin >> value;
    //     v.push_back(value);
    // }

    // for (int i = 0; i <v.size(); i++)
    // {
    //     cout<<v[i];
    // }

    // q2
    //  vector<int>v={1,5,88,2,6,5};

    // int st=v[0];

    // for (int i = 0; i <v.size(); i++)
    // {
    //     if (v[i]>st)
    //     {
    //         st=v[i];
    //     }

    // }

    // cout<<st;

    // q3
    //  vector<int>v={1,5,88,2,6,5,0};

    // int st=v[0];

    // for (int i = 0; i <v.size(); i++)
    // {
    //     if (v[i]<st)
    //     {
    //         st=v[i];
    //     }

    // }

    // cout<<st;

    // q4 sum of all elements
    //  vector<int>v={1,5,88,2,6,5,0};

    // int st=0;

    // for (int i = 0; i <v.size(); i++)
    // {
    //     st=st+v[i];

    // }

    // cout<<st;

    // q5 avg of all elements
    // vector<int>v={1,5,88,2,6,5,0};

    // int st=0;
    // int size=v.size();

    // for (int i = 0; i <v.size(); i++)
    // {
    //     st=st+v[i];

    // }

    // cout<<st/size;

    // q6 positivve and negative no count
    // vector<int> v = {1, 5, 88, 2, 6, 5, 0, -5};

    // int positive = 0;

    // for (int i = 0; i < v.size(); i++)
    // {
    //     if (v[i] >= 0)
    //     {
    //         positive++;
    //     }
    // }
    // int negative = v.size() - positive;

    // cout << positive << endl;

    // cout << negative;

    // q7
    //  vector<int> v = {1, 5, 88, 2, 6, 5, 0, -5};

    // int positive = 0;

    // for (int i = v.size()-1; i>=0; i--)
    // {
    //     cout<<" "<<v[i];
    // }

    // q8
    //  vector<int> v = {1, 5, 88, 2, 6, 5, 0, -5};

    // int no=-5;

    // for (int i = 0; i < v.size(); i++)
    // {
    //     if (v[i]==no)
    //     {
    //        cout<<i;
    //        return 0;
    //     }
    // }
    // cout<<"not found";

    // q9 second larg
    //    vector<int> v = {1, 5, 88, 2, 6, 5, 0, -5,55};
    // vector<int> v = {9, 9, 9, 9};
    // vector<int> v = {1, 5, 88, 2, 6, 5, 0, -5,55}; //for minus valus in vetor take first and 2nd from int min

    // int first = INT_MIN;
    // int second = INT_MIN;

    // for (int i = 0; i < v.size(); i++)
    // {
    //     if (v[i] > first)
    //     {
    //         second = first;
    //         first = v[i];
    //     }
    //     else if (first > v[i] && v[i] > second)
    //     {
    //         second = v[i];
    //     }
    // }

    // cout << first << endl;

    // if (second == INT_MIN)
    // {
    //     cout << "Not found second largest";
    // }
    // else
    // {
    //     cout << second;
    // }

    // q10
    //       vector<int> v = {1, 5, 88, 2, 6, 5, 0, -5,-1};
    //       int first=INT_MAX;
    //       int second=INT_MAX;

    //    for (int i = 0; i < v.size(); i++)
    //     {
    //         if (v[i] < first)
    //         {
    //             second = first;
    //             first = v[i];
    //         }
    //         else if (first < v[i] && v[i] <second)
    //         {
    //             second = v[i];
    //         }
    //     }
    //     cout<<first<<endl;
    //     cout<<second;

    // q11
    // vector<int> v = {1, 1, 1, 4, 5, 5, 8};
    // map<int, int> m = {};

    // for (auto x : v)
    // {
    //     m[x]++;
    // }

    // for (auto x : m)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }

    // q12 remove duplicate using set
    // vector<int> v = {1, 1, 1, 4, 5, 5, 8};
    // set<int> m = {};

    // for (auto x : v)
    // {
    //     m.insert(x);
    // }
    // for (auto x : m)
    // {
    //     cout << x;
    // }

    // another method using map

    //  vector<int> v = {1, 1, 1, 4, 5, 5, 8};
    //  map<int, int> m = {};

    // for (auto x : v)
    // {
    //     m[x]++;
    // }

    // for (auto x : m)
    // {
    //     cout << x.first << endl;
    // }

    // another method using while
    // vector<int> v = {1, 1, 2, 2, 5, 6, 8, 2};
    // int i = 0;

    // while (i < v.size())
    // {
    //     int j = i + 1;
    //     while (j < v.size())
    //     {
    //         if (v[i] == v[j])
    //         {
    //             v.erase(v.begin() + j);
    //         }
    //         else
    //         {
    //             j = j + 1;
    //         }
    //     }
    //     i = i + 1;
    // }

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << " " << v[i];
    // }

    // another code using flag

    // vector<int> v = {1, 1, 2, 2, 5, 6, 8, 2};
    // vector<int>m;

    // for(auto x:v){
    //     bool flag=false;
    //     for(auto y:m){
    //         if (x==y)
    //         {
    //            flag=true;
    //         }

    //     }
    //     if (flag==false)
    //     {
    //         m.push_back(x);
    //     }

    // }

    // for(auto x:m){
    //     cout<<x;
    // }

    // q13 copy 1 arr into 2
    // vector<int> v = {1, 1, 1, 4, 5, 5, 8};
    // vector<int>m={};

    // for (int i = 0; i <v.size(); i++)
    // {
    //      m.push_back(v[i]);
    // }

    // for (int i = 0; i < m.size(); i++)
    // {
    //    cout<<" "<<m[i];

    // }

    // q14

    // vector<int> v = {8, 6, 88, 66, 1, 1, 1, 4, 5, 99, 5, 8};

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << " " << v[i];
    // }

    // cout<<endl;

    // sort(v.begin(), v.end());

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << " " << v[i];
    // }

    // q15 move to left
    //  vector<int>v={1,2,3,4};
    //  int temp=v[0];

    // for (int  i = 1; i <v.size(); i++)
    // {
    //     v[i-1]=v[i];
    // }
    // v[v.size()-1]=temp;

    // for(auto x:v){
    //     cout<<x;
    // }

    // q16 move to right
    //  vector<int>v={1,2,3,4};
    //  int temp=v[v.size()-1];

    // for (int  i = v.size()-2; i >=0; i--)
    // {
    //     v[i+1]=v[i];
    // }
    // v[0]=temp;

    // for(auto x:v){
    //     cout<<x;
    // }

    // q17 arr add two

    // vector<int>n={1,2,3};
    // vector<int>m={5};
    // vector<int>o={};
    // int size=m.size()+n.size()-2;

    // for (int i = 0; i <n.size() ; i++)
    // {
    //     o.push_back(n[i]);
    // }

    // for (int i = 0; i <m.size() ; i++)
    // {
    //     o.push_back(m[i]);
    // }

    // for(auto x:o){
    //     cout<<x;
    // }

    // q18 two largest product

    // vector<int> n = {1, 2, 3, 5};

    // int larg = -1;
    // int second = -1;
    // for (auto x : n)
    // {
    //     if (x > larg)
    //     {
    //         second = larg;
    //         larg = x;
    //     }
    //     else if (larg > x && x > second)
    //     {
    //         second = x;
    //     }
    // }

    // cout << second * larg;

    // find pair sum

    // vector<int> v = {2, 3, 4, 6, 9};
    // sort(v.begin(), v.end());

    // int count = 0;
    // int sum = 6;
    // int i = 0;
    // int j = v.size() - 1;

    // while (i < j)
    // {
    //     if (v[i] + v[j] > sum)
    //     {
    //         j--;
    //     }
    //     else if (v[i] + v[j] < sum)
    //     {
    //         i++;
    //     }
    //     else
    //     {
    //         count++;
    //         i++;
    //         j--;
    //     }
    // }

    // cout << count;

    // union

    // vector<int> v = {2, 3, 4, 6, 9};
    // vector<int> y = {2, 3, 4, 5, 9, 10};
    // set<int> ans = {};

    // for (int j = 0; j < y.size(); j++)
    // {
    //     v.push_back(y[j]);
    // }

    // for (auto x : v)
    // {

    //     ans.insert(x);
    // }

    // for (auto x : ans)
    // {
    //     cout << x;
    // }

    // intersection
    // vector<int> x = {1, 2, 3, 0};
    // vector<int> y = {3, 2, 1, 4, 5, 0};
    // vector<int> z = {};

    // int i = 0;
    // while (i < x.size())
    // {
    //     int j = 0;
    //     while (j < y.size())
    //     {
    //         if (y[j] == x[i])
    //         {
    //             z.push_back(x[i]);
    //         }
    //         j++;
    //     }
    //     i++;
    // }
    // for (auto x : z)
    // {
    //     cout << x;
    // }

    // majority element

    // vector<int>v={1,1,1,1,2,2,5,2,1};
    // map<int,int>m;

    // for(auto x:v){
    //     m[x]++;
    // }

    // for(auto x:m){
    //     if (x.second>v.size()/2)
    //     {
    //         cout<<x.first;
    //     }

    // }

    // 2nd approach
    // vector<int> v = {1, 1, 1, 1, 2, 2, 5, 2, 1};
    // sort(v.begin(), v.end());
    // cout << v[v.size() / 2];

    // PREFIX SUM
    // Array givinng summ of previous sum know as prefix sum
    //  vector<int>v={1,2,3,4,5};
    //  vector<int>m;
    //  int i=0;
    //  int sum=0;

    // // while(i<v.size()){
    // //     sum=sum+v[i];
    // //     m.push_back(sum);
    // //     i++;
    // // }
    // for(auto x:v){
    //     sum=sum+x;
    //     m.push_back(sum);
    // }
    // for(auto x:m){
    //     cout<<x;
    // }

    // sum of max subarray 2 loop ans

    // vector<int> v = {-1, 2, 3, 4, -5, 6, 10};

    // int SumOfMaxSubArray = INT_MIN;

    // for (int i = 0; i < v.size(); i++)
    // {
    //       int sum = 0;
    //         for (int j = i; j < v.size(); j++)
    //         {
    //             sum = sum + v[j];
    //             SumOfMaxSubArray = max(sum, SumOfMaxSubArray);
    //         }

    // }
    // cout<<SumOfMaxSubArray;

    // same queestion using kadane algo

    // vector<int> v = {-2,1,-3,4,-1,2,1,-5,4};

    // int SumOfMaxSubArray = INT_MIN;

    // int sum = 0;
    // for (auto x : v)
    // {
    //     sum = max(x, sum + x);
    //     SumOfMaxSubArray = max(SumOfMaxSubArray, sum);
    // }

    // cout << SumOfMaxSubArray;
    

    // 2149 leet postive negative series print

    // vector<int> v = {3,1,-2,-5,2,-4};
    // vector<int>a;
    // vector<int>b;

    // for(auto x : v){
    //     if (x >= 0) {
    //         a.push_back(x);
    //     } else {
    //         b.push_back(x);
    //     }
    // }

    // vector<int> result;

    // for (int i = 0; i < v.size(); i++) {
    //     if (i % 2 == 0) {
    //         result.push_back(a[i/2]);
    //     } else {
    //         result.push_back(b[i/2]);
    //     }
    // }

    // for (auto x : result) {
    //     cout << x << " ";
    // }

    // 1480 print arr in sum of prev element

    //     class Solution {
    // public:
    //     vector<int> runningSum(vector<int>& nums) {
    //         int sum=0;
    //         vector<int>v;
    //         for(auto x:nums){
    //             sum=sum+x;
    //             v.push_back(sum);
    //         }
    //         return v;
    //     }




    // concate two arr

    //     class Solution {
    // public:
    //     vector<int> getConcatenation(vector<int>& nums) {
    //      vector<int>b=nums;
    //      vector<int>ans;

    //      for (auto x:nums){
    //         ans.push_back(x);
    //      }
    //      for (auto x:b){
    //         ans.push_back(x);
    //      }
    //      return ans;
    //     }
    // };

    


    // 2011 string comparioisn 
    
//     class Solution {
// public:
//     int finalValueAfterOperations(vector<string>& operations) {
//         int x=0;
//         for(int i=0; i<operations.size(); i++){
//             if(operations[i]=="++X"||operations[i]=="X++"){
//                 x=x+1;
//             }
//             else{
//                 x=x-1;
//             }
//         }
//         return x;
//     }

// };

    return 0;
}