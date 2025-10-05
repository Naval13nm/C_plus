#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        // for (int j = 1; j <= i; j++)
        // {
        //     if (j==i||i==n)
        //     {
        //        cout<<" *";
        //     }
        //     else{
        //         cout<<"  ";
        //     }
        // }
        for (int j = n; j >= i; j--)
        {
            if (j==i||j==n)
            {
               cout<<" *";
            }
            else{
                cout<<"  ";
            }
        }
        

        cout<<" "<<endl;

        


        
    }

  
}