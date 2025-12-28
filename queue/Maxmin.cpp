// #include <iostream>
// #include <queue>
// #include <stack>

// using namespace std;

// int main()
// {
//     queue<int> st;

//     st.push(10);
//     st.push(20);
//     st.push(30);

//     stack<int> s;
//     int max = INT_MIN;
//     int min = INT_MAX;

    // while (!st.empty())
    // {
    //     if (st.front() > max)
    //     {
    //  max=st.front();
    //         if (s.empty())
    //         {
    //             s.push(st.front());
    //         }
    //         else
    //         {
    //             s.pop();
    //             s.push(st.front());
    //         }
    //     }
    //     st.pop();
    // }

    //  while (!st.empty())
    // {
    //     if (st.front() < min)
    //     {
    //         min=st.front();
    //         if (s.empty())
    //         {
    //             s.push(st.front());
    //         }
    //         else
    //         {
    //             s.pop();
    //             s.push(st.front());
    //         }
    //     }
    //     st.pop();
    // }

    // cout<<s.top();

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(50);
    q.push(5);
    q.push(30);
    q.push(25);

    int mn = INT_MAX;
    int mx = INT_MIN;

    while(!q.empty()) {
        int x = q.front();
        q.pop();

        if(x < mn) mn = x;
        if(x > mx) mx = x;
    }

    cout << "Minimum: " << mn << endl;
    cout << "Maximum: " << mx << endl;

    return 0;
}