#include <iostream>
using namespace std;

void fun(int *a, int *b){
   *a=20; *b=30;
   cout<<*a<<endl;
   cout<<*b<<endl;
   
}



int main() {
    int a=40;
   int b=50;
   fun(&a,&b);
   cout<<a<<endl;
   cout<<b<<endl;
    return 0;
}
