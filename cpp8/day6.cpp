#include <iostream>
#include <vector>
using namespace std;
int main()
{

    // vector<int>Sum={37,89,33,48};
    // int sum=0;
    // for (int i = 0; i <Sum.size(); i++)
    // {
    //    sum=Sum[i]+sum;

    // }
    // cout<<sum;

    // 2nd q vector element reverse print only

    // vector<int>Sum={1,2,3,4};

    //     for (int i = Sum.size(); i>0; i--)
    //     {
    //        cout<<Sum[i-1]<<endl;

    //     }

    // 3rd q here we reversed the inside elemnets of vector

    // vector<int> Sum = {1, 2, 3, 4};
    // int i = 0;
    // int j = Sum.size() - 1;
    // while (i < j)
    // {
    //     swap(Sum[i], Sum[j]);
    //     i++;
    //     j--;
    // }
    // for (int i = 0; i < Sum.size(); i++)
    // {
    //     cout << Sum[i] << endl;
    // }

    // 4th q check palindrome

    // 1st option

    // vector<int> Sum = {1, 2, 1,};
    // int i = 0;
    // int j = Sum.size() - 1;
    // while (i < j)
    // {
    //     if (Sum[i] != Sum[j])
    //     {
    //         cout<<"Not ";
    //         break;
    //     }
    //    i++;
    //    j--;

    // }
    // cout<<"pal";

    // 2nd option

    // vector<int> v = {1, 2, 1};
    // vector<int> Sum = v;
    // int i = 0;
    // int j = Sum.size() - 1;
    // while (i < j)
    // {
    //     swap(Sum[i], Sum[j]);
    //     i++;
    //     j--;
    // }
    // if (v == Sum)
    // {
    //     cout << "pal";
    // }
    // else
    // {
    //     cout << "not";
    // }

    // 5th q to print odd index values of vector

    vector<int> Sum = {
        3,
        4,
        5,
        6,
        7};

    // 1st method

    for (int i = 0; i < Sum.size(); i++)
    {
        if (i % 2 != 0)
        {
            cout << Sum[i] << endl;
        }
    }

    // 2nd method

    // for (int i = 1; i < Sum.size(); i = i + 2)
    // {
    //     cout << Sum[i]<<endl;
    // }

   

    return 0;
}