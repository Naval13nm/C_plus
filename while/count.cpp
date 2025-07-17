#include<iostream>
using namespace std;

int main()
{
    // int n,temp=0;
    // cout<<"Enter a number: ";
    // cin>>n;
    // int x;

    // while(x>0){
    //   temp++;
    //   x=n%10;   
    // }
    // cout<<temp<<endl;
    int n;
    cout<<"Enter no";
    cin>>n;
    int count=0;
    while(n>0){
      count++;
      
      n=n/10;
    }
    cout<<count;

    return 0;
}