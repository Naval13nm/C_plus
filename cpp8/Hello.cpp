#include<bits/stdc++.h>
// #include <iostream>


using namespace std;

void add(int a, int  b){
        int sum=a+b;
     cout<<sum;
    }


void sub(int a, int  b){
        int sub=a-b;
     
     cout<<sub;
    }


void mul(int a, int  b){
       
        int mul=a*b;
     cout<<mul;
    }

int main(){

    int a,b;
    cin>>a;
    cin>>b;
    if (a==b)
    {
        add(a,b);
    }
    else if(a>b){
        sub(a,b);
    }
    else if (a<b)
    {
        mul(a,b);
    }
    else{
         cout<<"Not Found";
    }
       
    
    
    return 0;
    
};