#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // vector<int> v = {2, 8, 1, 5, 6, 3, 4, 7};   
    // int target = 7;

    // sort(v.begin(), v.end()); // 1st we need to sort it before applying binary search

    // int left = 0;             // pointer at st             //using two pointers left and right also called 2pointer approach
    // int right = v.size() - 1; // pointer at end

    // while (left <= right)
    // {
    //     int mid = (left + right) / 2;

    //     if (v[mid] == target)
    //     {
    //         cout<<mid;
    //         return 0;
    //     }

    //     else if (v[mid] < target)
    //     {
    //         left = mid + 1;
    //     }

    //     else if (v[mid] > target)
    //     {
    //         right = mid - 1;
    //     }
    // }

    // return -1; // if item not found



    //postive negative series print

    vector<int> v = {3,1,-2,-5,2,-4}; 
    vector<int>a;
    vector<int>b;

    for(auto x : v){
        if (x >= 0) {
            a.push_back(x);
        } else {
            b.push_back(x);  
        }
    }

    vector<int> result; 

    for (int i = 0; i < v.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(a[i/2]);  
        } else {
            result.push_back(b[i/2]);
        }
    }

    for (auto x : result) {
        cout << x << " ";
    }

    return 0;
}

