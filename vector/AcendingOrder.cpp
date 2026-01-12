#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10,5,1,2,8,9};


    // using double for loop o(n^2) (Selection sort)


    // for (int i = 0; i < v.size() - 1; i++)
    // {
    //     for (int j = v.size() - 1; j>i; j--)
    //     {
    //         if (v[i] > v[j])
    //         {
    //             swap(v[i], v[j]);
    //         }
    //     }


    //     //2nd using while loop

    //     // int j=v.size()-1;

    //     // while (j>i)
    //     // {
    //     //     if (v[i]>v[j])
    //     //     {
    //     //         swap(v[i], v[j]);
    //     //         j--;
    //     //     }
    //     //     else
    //     //     {
    //     //         j--;
    //     //     }

            
    //     // }
        
    // }
    

    //using sort methpd;

    sort(v.begin(),v.end());

    for (auto x : v)
    {
        cout << x << " ";
    }

    return 0;
}









// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> arr = {7,6,4,2,1};

//     for(int i = 0; i < arr.size(); i++){
//         for(int j = i+1; j < arr.size(); j++){
//             if(arr[i] > arr[j]){
//                 swap(arr[i],arr[j]);
//             }
//         }
//     }

//     for(auto x : arr){
//         cout<<x<<" ";
//     }
// }