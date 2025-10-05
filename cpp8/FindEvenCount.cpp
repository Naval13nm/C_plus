#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> Sum = {
        48, 3,
        4,
        5,
        6,
        7};

    // find even values are more or odd values in this

    int even = 0;
    int odd = 0;

    for (int i = 0; i < Sum.size(); i++)
    {
        if (Sum[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    if (even > odd)
    {
        cout << "even values are more";
    }
    else if (even == odd)
    {
        cout << "equal";
    }

    else
    {
        cout << "Odd values are more";
    }

    return 0;
}