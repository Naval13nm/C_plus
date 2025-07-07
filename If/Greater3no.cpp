#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a<=b||a<=c){
        if(b<=c){
            cout<<"C is greater"<<c;
        }
        else{
            cout<<"B is greater"<<b;
        }
    }
    else if(a==b||a==c||b==c){
        if(a==b){
            cout<<"A & B are equal"<<a;
        }
        else if(a==c){
            cout<<"A & B are equal"<<a;
        }
        else if(b==c){
            cout<<"A & B are equal"<<b;
        }
        else {
            cout<<"Equal";
        }
    }
    else {
        cout<<"A is greater"<<a;
    }
    return 0;
}
