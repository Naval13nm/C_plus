#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    if(a%11==0 && a%5==0){
        cout<<"Divisible by 11 and 5 ";
    }
    else{
        cout<<"Not divisible by 11 and 5 ";
    }
    return 0;
}
