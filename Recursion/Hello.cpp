#include <bits/stdc++.h>
using namespace std;

// void Print(int n){
// if(n==0){               //base case which tells where to end recursion without this it runs the loop infinite
// return ;
// }
// cout<<"hello"<<endl;
// Print(n-1);            //recursive case where it call the function again
// }

// void Numbers(int n,int i){
//     if (i>n)
//     {
//         return;
//     }
//     cout<<i<<endl;
//     Numbers(n,i+1);

// }

// void ReverseNumbers(int i,int n=-2){
//     if (i<n)
//     {
//         return;
//     }
//     cout<<i<<endl;
//     ReverseNumbers(i-1,n=-2);

// }

// int SumNaturalNo(int n){
//     if (n==0)
//     {
//         return 0;
//     }

//     return n + SumNaturalNo(n-1);          // this will wait till SumNaturalNo function wriitens the value called as backtracking

// }

// void print(int i, int n, int sum)
// {
//     if (i > n)
//     {
//         cout << sum << endl;
//         return;
//     }
//     if (i % 2 == 0)
//     {
//         print(i + 1, n, sum = sum + i);
//     }
//     else
//     {
//         print(i + 1, n, sum);
//     }
// }

// int print(int i, int n)
// {
//     if (i > n)
//     {
//         return 0;
//     }

//     if (i % 2 == 0)
//     {
//         return i + print(i + 1, n); // value added during backtracking
//     }
//     else
//     {
//         return print(i + 1, n);
//     }
// }


// int factorial(int n) {
//     if (n == 0 || n == 1) {
//         return 1;              // base case
//     }
//     return n * factorial(n - 1);  // backtracking
// }


// void factorial(int n, int result) {
//     if (n == 0 || n == 1) {
//         cout<<result;
//         return;   // stop recursion
//     }
//     result *= n;        // side effect
//     factorial(n - 1, result);
// }


int main()
{
    // Print(5);
    // Numbers(10,1);
    // ReverseNumbers(10);
    // cout<<SumNaturalNo(5);
    // print(1, 10, 0);
    // cout<<print(1, 10);
    // cout << factorial(5);
    // factorial(5, 1);

    return 0;
}