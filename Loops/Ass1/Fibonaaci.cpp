#include<iostream>
using namespace std;
int main(){
    int n=5;
    int i=2;
    int first=0;
    int second=1;
    int last;
    cout<<first<<endl;
    cout<<second<<endl;

    while (i<n)
    {
        
        last=first+second;
        cout<<last<<endl;
        first=second;
        second=last;
        i++;
    }
    
    
    
    return 0;
}