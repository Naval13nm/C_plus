#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // q1
    //  int no=1;
    //  for (int i = 1; i<=3; i++)
    //  {
    //      for (int j = 1; j <=6; j++)
    //      {
    //          if (j%2!=0)
    //          {
    //              cout<<no;
    //              no++;
    //          }
    //          else{
    //              cout<<"*";
    //          }

    //     }

    //     cout<<" "<<endl;

    // }

    // vector<int>v={10,40,100,50};
    // int no=v[0];

    // for (int i = 0; i <v.size(); i++)
    // {
    //     if (v[i]>no)
    //     {
    //         no=v[i];
    //     }

    // }
    // cout<<no;

    // 3rd q print those index value which is not present in given vector like in this vector

    // vector<int>v={1,6,5,3};
    // vector<int>y={};

    // int size=v.size();
    // for (int i = 0; i <size; i++)
    // {
    //    y.push_back(i);
    // }

    // for (int j = 0; j <y.size(); j++)
    // {
    //     int count=0;
    //     for (int i = 0; i<v.size(); i++)
    //     {
    //         if (v[i]==y[j])
    //         {
    //           count++;
    //         }

    //     }
    //     if (count==0)
    //     {
    //         cout<<y[j]<<endl;
    //     }

    // }

    // vector<int>v={0,1,3}; //onlt valids if element lies between 0 to n range here n=3 so no comes between 0 to 3
    //     int Size=v.size();
    //     int SumofSize=0;
    //     int Sum=0;

    //     for (int i = 0; i <=Size; i++)
    //     {
    //        SumofSize=SumofSize+i;
    //     }

    //     for (int i = 0; i <v.size(); i++)
    //     {
    //         Sum=Sum+v[i];
    //     }

    //     int totalSum=SumofSize-Sum;
    //     cout<<totalSum;

    //     return 0;
    // }

    // class Solution {
    //   public:
    //     int majorityElement(vector<int>& arr) {
    //         // code here
    //      int n = 7;

    //     for (int i = 0; i < n; i++) {
    //         int count = 0;

    //         for (int j = 0; j < n; j++) {
    //             if (arr[j] == arr[i]) {
    //                 count++;
    //             }
    //         }

    //         if (count > 3) {
    //             return arr[i];
    //         }
    //     }

    //     return -1;
    // }

    // Q4 Move zero to end
    // vector<int> v = {3, 0, 1, 9, 0, 5, 0, 6};
    // vector<int> v = {3,5,0,0,4};
     vector<int> v = {1,2,0,4,3,0,5,0};

    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            v.erase(v.begin() + i);
            count++;
            i--; // for 2nd eg needed
        }
    }
    if (count==0)
    {
       cout<<"no zero exist in array";
    }
    

    for (int i = 1; i <= count; i++)
    {
        v.push_back(0);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
};