#include<iostream>
using namespace std;
int main(){

    int a = 10;

    int *p=&a;

        cout<<*p<<endl;
        cout<<p<<endl;

    *p--;
          cout<<p<<endl;
    cout<<*p<<endl;


    return 0;
}
