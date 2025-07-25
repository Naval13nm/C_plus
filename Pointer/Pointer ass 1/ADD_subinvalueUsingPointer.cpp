#include <iostream>
using namespace std;

int main(){
   int a=10;
   int b=20;
   int c=30;

   int *p=&a;
   int *q=&b;
   int *r=&c;

   int sum=*p+*q;
   cout<<sum<<endl;


    return 0;
}