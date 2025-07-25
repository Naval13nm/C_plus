
#include <iostream>
using namespace std;

int sum(int *a,int *b){
        return *a+*b;
    }

int main() {
    int a=10;
    int b=20;
    int *ptr1=&a;
    int *ptr2=&b;


    cout<<sum(ptr1,ptr2)<<endl;
    return 0;
    
}
