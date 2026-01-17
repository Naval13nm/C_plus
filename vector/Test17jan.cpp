#include <bits/stdc++.h>
using namespace std;

int SumOfVector(vector<int> v)
{
    int sum = 0;
    for (auto x : v)
    {
        sum = sum + x;
    }
    // cout << sum << endl;
    return sum;
}

void PrintNo(vector<int> v)
{

    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}

void Reverse(vector<int> &v)
{
    reverse(v.begin(), v.end());

    // for (auto x : v)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;
}

void Even(vector<int> v)
{
    cout << "even no are : ";
    for (auto x : v)
    {
        if (x % 2 == 0)
        {
            cout << x << " ";
        }
    }
    cout << endl;
}

int main()
{
    vector<int> candies = {2, 3, 5, 1, 311, 6};

    int no;
    cout << "enter no " << endl;
    cin >> no;

    if (no == 0) /// case 1  when zero
    {
        Reverse(candies);

        for (auto x : candies)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    else if (no % 2 == 0) ////case 2  when even
    {
        int Sum = SumOfVector(candies);
        cout << "Sum is : " << Sum << endl;

        if (Sum >= 100)
        {
            Even(candies);
        }
    }

    else /// case 3   when odd
    {
        PrintNo(candies);
    }
    return 0;
}