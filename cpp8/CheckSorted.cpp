#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> Sum = {1, 2, 3,10, 4, 5};

    // find vector is sorted or not

    // int First = 0;
    // int Second = 1;

    // for (int i = 0; i < Sum.size() - 1; i++)
    // {
    //     if (Sum[Second] < Sum[First])
    //     {
    //         cout << "not sorted";
    //         return 0;
    //     }

    //     First++;
    //     Second++;
    // }

    // cout << "Sorted";


    //2nd method
    int i=0;
    int j=1;

    while (j<Sum.size())
    {
       if (Sum[i]>Sum[j])
       {
        cout<<"Not sorted";
        return 0;
       }
       i++;
       j++;
       
    }
    cout<<"Sorted";

    return 0;
}