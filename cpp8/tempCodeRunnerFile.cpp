#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> n = {1, 2};

    int smallest = INT_MAX;
    int second = INT_MAX;
    for (auto x : n)
    {
        if (x < smallest)
        {
            second = smallest;
            smallest = x;
        }
        else if (smallest < x && x < second)
        {
            second = x;
        }
    }

    if (second == INT_MAX)
    {
        cout << "not found";
    }

    else
    {
        cout << second;
    }
    return 0;
}