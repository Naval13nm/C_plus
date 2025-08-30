#include<bits/stdc++.h>
using namespace  std;
//area ==>circle,sq,rect
//no of argumnets
//type of argumnets
//order of argument
//dummy variable
//output mai depend nhi krta hai
int area(int a,int b){
    return a*b;
}

float area(int a){
    return a*a*3.14;
}
// int area(int b, int  c, float a){
//     return a*a;
// }

int area(int b, float a){
    return a*a;
}
int main(){
    cout<<area(3,4)<<"\n";
    cout<<area(3)<<"\n";
    cout<<area(3,4.6f);// here without 
    // cout<<area(0,3,4)<<"\n";

}