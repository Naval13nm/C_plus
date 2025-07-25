#include <iostream>
using namespace std;

int main(){
   int a=0;
   int *p=&a;
   cout<<p<<endl;
   
   int *add=p+1;
   cout<<add<<endl;

   int *sub=p-1;
   cout<<sub<<endl;

    return 0;
}