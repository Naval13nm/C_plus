#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int lastdigit=0;
    int result=0;

    while(n>0){
        lastdigit=n%10;
        // cout<<lastdigit<<endl;
        n=n/10;
        result=result*10+lastdigit;


    }
    cout<< result<<endl;
    return 0;
}