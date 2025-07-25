#include<iostream>
using namespace std;
int main(){

    int a = 10;
    int b=10;


  
    int *p1=&a;
      cout<<*p1<<endl;
      cout<<p1<<endl;

    int *p2=&b;
        cout<<*p2<<endl;
        cout<<p2<<endl;

    if (p1==p2)
    {
       cout<<"equal";
    }
    else{
        cout<<"not equal";
    }
    
    return 0;
}
