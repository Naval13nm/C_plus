#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> Sum = {
        48,3,
        4,
        5,
        6,
        7,41};


        //1st  method

    // int max = Sum[0];
    // int Secondlarg;

    // for (int i = 1; i < Sum.size(); i++)
    // {
    //     if (Sum[i] > max)
    //     {
    //         Secondlarg = max;
    //         max = Sum[i];
    //     }
    //         else if (Sum[i]<max && Sum[i]>Secondlarg)  //method works only if array is sorted and 2nd largest comes just before the largest so we use this
            
    //             Secondlarg=Sum[i];
    //         }
            
    

    // cout << max;
    // cout << Secondlarg;



    // 2nd method

    int max=-1;
    int Secondlarg=-1;

    for (int i = 0; i <Sum.size(); i++)
    {
        if (Sum[i]>max)
        {
            Secondlarg=max;
            max=Sum[i];
        }
        else if (Sum[i]<max && Sum[i]>Secondlarg)
        {
            Secondlarg=Sum[i];
        }
        
      
    }
    
     cout << max<<endl;
    cout << Secondlarg;

    return 0;
}