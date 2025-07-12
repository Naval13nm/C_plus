#include<iostream>
using namespace std;    
int main(){
    int digit=0;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int last;
    int sum=0;
    while (n!=0)
    {
        last=n%10;
        sum=sum+last;

        n=n/10;
        digit++;
    }
    cout<<"Number of digits in the number is: "<<digit<<endl;
    cout<<"Sum of digits in the number is: "<<last<<endl;

    return 0;
}