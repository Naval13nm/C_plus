#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;

    q.push(10);
    q.push(50);
    q.push(5);
    q.push(30);
    q.push(25);

    cout << "sum first and last: " << q.front() + q.back() << endl;

    return 0;
}