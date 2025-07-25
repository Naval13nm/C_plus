#include <iostream>
using namespace std;

int main(){
    int a=10;

    int b=20;

    int c=30;

    cout<<&a<<" "<<&b<<" "<<&c<<endl;

    int *ptr;
    ptr=&a;
 
    cout<<*ptr--<<endl;
    cout<<*ptr--<<endl;
    cout<<*ptr<<endl;



    return 0;
}