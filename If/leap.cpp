#include<iostream>
using namespace std;
int main(){
int a;
cin>>a;
if(a%4==0 && a%100!=0){
    cout<<"leap";
}
else{
    cout<<"not leap";
}
return 0;
}
// if a no is divisible by 4 and not by 100 then it is leap or it is divisible by 400//
