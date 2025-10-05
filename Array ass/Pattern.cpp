#include <iostream>
using namespace std;
int main()
{
    int n = 3;
for (int i = 1; i<=n; i++)
    {
        for(int j=n;j>=1;j--){
            if(i>=j) cout<<"* ";
            else cout<<"  ";
        }
        // for(int j=n-1;j<=n;j++){
        //     if(i>=j) cout<<"* ";
        //     else cout<<"  ";
        // }
        
  

 
                
       cout<<" "<<endl;
    }

// for (int i = n-1; i>=1; i--)
//     {
//         for(int j=n;j>=1;j--){
//             if(i>=j) cout<<"* ";
//             else cout<<"  ";
//         }
//         for(int j=n-1;j<=n;j++){
//             if(i>=j) cout<<"* ";
//             else cout<<"  ";
//         }

//      cout<<" "<<endl;
//     }
}