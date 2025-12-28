#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;

    q.push(10);
    q.push(5);
    q.push(5);
    q.push(30);
    q.push(25);
    int size = q.size();
    while (size > 0)
    {
        if (q.front() == 5)
        {
            q.pop();
        }
        size--;
    }

    while (!q.empty())
    {
        cout << q.front()<<endl;
        q.pop();
    }

    return 0;
}