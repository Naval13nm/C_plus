#include<iostream>
using namespace std;    
int main(){
    int digit=0;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    while (n!=0)
    {
        n=n/10;
        digit++;/* code */
    }
    cout<<"Number of digits in the number is: "<<digit<<endl;

    return 0;
}