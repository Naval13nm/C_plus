#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c;
    d=a+b+c;
    if(a>0 && b>0 && c>0 && d==180 ){
      cout<<"Triangle";
    }
    else{
        cout<<" Not Triangle";
    }

    return 0;
}