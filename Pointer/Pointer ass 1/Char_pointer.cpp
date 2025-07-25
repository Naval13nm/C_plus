#include<iostream>
using namespace std;
int main(){

    char a = 'h';

    cout<<(void*)&a<<endl;
  
    char *p=&a;
      cout<<*p<<endl;
       cout<<(void*)p<<endl;
    *p++;

      cout<<*p<<endl;
      cout<<(void*)p<<endl;
  

    return 0;
}
