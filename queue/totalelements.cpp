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

    int count = 0;
    cout<< q.size()<<endl;

    while (!q.empty())
    {
        count++;
        q.pop();
    }


    cout << "total elements: " << count << endl;

   

    return 0;
}