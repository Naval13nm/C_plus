#include <iostream>
using namespace std;
int main()
{
  int a;
  cout << "Enter your marks: ";
  cin >> a;
  if (a >= 90 && a <= 100)
  {
    printf("A");
    return 0;
  }
  else if (a >= 75 && a < 90)
  {
    printf("B");
  }
  else if (a >= 50 && a < 75)
  {
    printf("C");
  }
  else if (a >= 35 && a < 50)
  {
    printf("D");
  }
  else
  {
    printf("F");
  }
}