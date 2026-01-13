#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     vector<int> v = {10, 5, 1, 2, 8, 9};

//     int temp = v[v.size() - 1];
    
//     for (int i = v.size() - 2; i >= 0; i--)
//     {
//         v[i + 1] = v[i];
//     }
//     v[0] = temp;

//     for (auto x : v)
//     {
//         cout << x << " ";
//     }

//     return 0;
// }



///// storing n rotation values (RIGHT rotation by 2)
///// if want to move right two then store last two values /////////////////////

// int main()
// {
//     vector<int> v = {10, 5, 1, 2, 8, 9};

//     // store last two elements
//     int temp1 = v[v.size() - 2];
//     int temp2 = v[v.size() - 1];

//     // shift remaining elements to the right by 2
//     for (int i = v.size() - 1; i >= 2; i--)
//     {
//         v[i] = v[i - 2];
//     }

//     // put stored elements at the front
//     v[0] = temp1;
//     v[1] = temp2;

//     for (auto x : v)
//     {
//         cout << x << " ";
//     }

//     return 0;
// }




// using STL library //////////////////////////////////////////////////////////

// rotate(st, middle, end) where middle tells which element should come to the front.
// For RIGHT rotation by n:
// we want the last n elements to come to the front,
// so we move the starting point to (end - n),
// that is why we use v.end() - n.


int main()
{
    vector<int> v = {10, 5, 1, 2, 8, 9};

    int n;
    cout << "Enter No of rotations or shifting positions" << endl;
    cin >> n;

    // handle cases where n is greater than size
    n = n % v.size();

    // RIGHT rotation by n
    rotate(v.begin(), v.end() - n, v.end());

    for (auto x : v)
    {
        cout << x << " ";
    }

    return 0;
}
