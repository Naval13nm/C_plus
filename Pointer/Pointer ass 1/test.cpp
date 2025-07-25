#include<iostream>
using namespace std;
int main() {
    int a=10; 
    cout<<a<<endl;

    cout<<&a<<endl; // address of a


    int *b=&a;
    cout<<b<<endl; // this will cause an error, as b cannot hold an address directly
    cout<<&b<<endl; // gives value of the address stored in pointer variable b
    cout<<*b<<endl; // gives value of the address which is stored in pointer variable b

    int **c=&b;
    cout<<c<<endl; // this will also cause an error, as c cannot hold a pointer type

    int ***d=&c;
    cout<<d<<endl; // this will also cause an error, as d cannot hold a pointer type
    cout<<*d<<endl; // gives value of the address which is stored in pointer variable d


return 0; 
}