#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> Sum = {};

    cout << "enter size of vector" << endl;
    int size;
    cin >> size;

    for (int i = 1; i <= size; i++)
    {
        int no;
        cin >> no;
        Sum.push_back(no);
    }

    for (int i = 0; i < Sum.size(); i++)
    {
        cout << " " << Sum[i];
    }

    cout << endl;

    int max = Sum[0];

    for (int i = 1; i < Sum.size(); i++)
    {
        if (Sum[i] > max)
        {
            max = Sum[i];
        }
    }

    cout << max;

    return 0;
}