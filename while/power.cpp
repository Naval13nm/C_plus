#include<iostream>
using namespace std;

int main()
{
    int n,power,ans=1;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter a Power of number: ";
    cin>>power;
   

    while(power>0){
        ans=n*ans;
        power--;
    }
    cout<< ans<<endl;
    return 0;
}