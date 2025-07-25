#include<iostream>
using namespace std;
int main(){

    int x = 10;
    cout<<x<<endl;

    int *p= &x; 
    cout<<*p<<endl;
 

    (*p)++; // it will increment the value of x through pointer p
    cout<<*p<<endl;

    *p++; // it will print garbage value 
    cout<<*p<<endl;

    cout<<x<<endl;
    return 0;
}
