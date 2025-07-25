#include<iostream>
using namespace std;
int main(){

    int a = 10;

    int *p=&a;

    int b=20;

    int *q=&b;

    int b=*p+*q;
    cout<<b<<endl;

    return 0;
}
