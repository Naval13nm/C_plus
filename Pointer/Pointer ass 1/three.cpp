#include<iostream>
using namespace std;
int main(){

    int a = 10;
    int b=20,c=30;

    cout<<&a<<endl;
    cout<<&b<<endl;
    cout<<&c<<endl;

    int *p=&a;
      cout<<*p<<endl;
    p=&b;
      cout<<*p<<endl;
    p=&c;
      cout<<*p<<endl;
  

    return 0;
}
