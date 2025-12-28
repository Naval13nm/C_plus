#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    vector<int> v = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110};
    vector<int> ans;

    vector<int> arr1;
    vector<int> arr2;

    v.sort(v.begin(), v.end);

    for (int i = 0; i < v.size() / 2; i++)
    {
        arr1.push_back(v[i]);
    }

    for (int i = v.size() / 2; i < v.size(); i++)
    {
        arr2.push_back(v[i]);
    }

    for (auto x : arr1)
    {
        cout << x;
    }

    cout << endl;

    for (auto x : arr2)
    {
        cout << x;
    }

    return 0;
}