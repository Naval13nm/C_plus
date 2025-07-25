#include <iostream>
using namespace std;
int main()

{
  int n = 4;
  int i=n;
  while (i<=n)
  {
    int j=1;
    while (j<=n)
    {
      if (j<=i)
      {
        cout<<"* ";
        j--;
      }
      else {j--;}
      
    }
    cout<<endl;
    i--;
    
  }
  
  
 
  return 0;
};