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




// class Solution {
// public:
//     int fib(int n) {
//         int first=0;
//         int second=1;
//         int i=2;
//         int last=0;

//         if(n==0) return 0;
//         if(n==1) return 1;

//         while(i<=n){
//             last=first+second;
//             first=second;
//             second=last;
//             i++;
//         }
//         return last;
//     }
// };