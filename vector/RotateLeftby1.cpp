#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     vector<int> v = {10, 5, 1, 2, 8, 9};

//     int temp = v[0];

//     for (int i = 0; i < v.size() - 1; i++)
//     {
//         v[i] = v[i + 1];
//     }

//     v[v.size() - 1] = temp;

//     for (auto x : v)
//     {
//         cout << x << " ";
//     }

//     return 0;
// }



///// storing n rotations value if want to move left two then store st two values////////////////////////////

// int main()
// {
//     vector<int> v = {10, 5, 1, 2, 8, 9};

//     int temp1 = v[0];
//     int temp2 = v[1];

//     for (int i = 0; i < v.size() - 2; i++)
//     {
//         v[i] = v[i + 2];
//     }

//     v[v.size() - 1] = temp2;
//     v[v.size() - 2] = temp1;

//     for (auto x : v)
//     {
//         cout << x << " ";
//     }

//     return 0;
// }


// kth times rotation////////////////////////////////////////////////

// int main()
// {
//     vector<int> v = {10, 5, 1, 2, 8, 9};

//     int k = 2;
//     k = k % v.size();


//     while (k > 0)
//     {
//         int temp = v[0];

//         for (int i = 0; i < v.size() - 1; i++)
//         {
//             v[i] = v[i + 1];
//         }

//         v[v.size() - 1] = temp;

//         k--;
//     }

//     for (auto x : v)
//     {
//         cout << x << " ";
//     }

//     return 0;
// }



//using stl library//////////////////////////////////////////////////////////////////////////////////
// rotate(st, middle, end) where middle tells which element should come to the front.
// If we want to rotate by n, the element at index n comes to the start,
// that is why we use v.begin() + n.



int main()
{
    vector<int> v = {10, 5, 1, 2, 8, 9};

    int n;
    cout<<"Enter No of rotations or shifting postions"<<endl;
    cin>>n;
    n = n % v.size();

    rotate(v.begin(), v.begin() + n, v.end());


    for (auto x : v)
    {
        cout << x << " ";
    }

    return 0;
}