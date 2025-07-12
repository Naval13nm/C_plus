#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int x;

    for (int i =1 ; i <=n; i++)
    {
        if (i%2 == 0) {
            x=i*i;
            cout << x << endl;
        } else if (i== 1) 
        {
            cout << i<< endl;
        } 
        else
        {
            x=i*i;
            cout << -x <<  endl;
        }
        
        
    }
    
    return 0;
}