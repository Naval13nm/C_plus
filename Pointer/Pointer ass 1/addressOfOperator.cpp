#include<iostream>
using namespace std;
int main(){

    int x = 10;
    cout<<x<<endl;
    cout<<&x<<endl; // address of x

    int *p= &x; // * needed to store address of x in a pointer variable
    cout<<p<<endl;
    cout<<*p<<endl; // gives value of those address which is stored in pointer variable p
    
    int **q=&p; // cant store *p value in q pointer with single star we need two star
    cout<<q<<endl;

    int ***r=&q;
    cout<<r<<endl; 






    return 0;
}