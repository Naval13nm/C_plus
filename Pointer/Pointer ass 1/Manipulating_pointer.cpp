#include<iostream>
using namespace std;
int main(){

    int num = 10;


  
    int *p=&num;
      cout<<*p<<endl;

    *p=*p+10;

      cout<<*p<<endl;

    return 0;
}
