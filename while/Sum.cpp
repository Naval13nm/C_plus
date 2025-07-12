#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum=0;
    int i=1;
    while(i<=n){
        sum=i+sum;
        i++;

    }
    cout<<"Sum of first "<<n<<" natural numbers is: "<<sum<<endl;
    return 0;
}