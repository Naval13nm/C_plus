#include <iostream>
using namespace std;
int main()

{
  int n = 5;
  
  int i=n;
  while (i>0)
  {
    int j=1;
    while (j<=i)
    {
      cout << "* ";
      j++;
    }
    cout << endl;
    i--;
  }

  return 0;
};