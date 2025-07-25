#include <iostream>
using namespace std;

int main(){
  int x=10;
  int *ptr1=&x;

  int **ptr2=&ptr1;
  cout<<**ptr2<<endl;

  **ptr2=20; //dereffrencing
  cout<<**ptr2<<endl;

  int ***ptr3=&ptr2;
  cout<<***ptr3<<endl;

  ***ptr3=30;
  cout<<***ptr3<<endl;


    return 0;
}