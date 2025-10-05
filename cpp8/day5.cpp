#include <iostream>
using namespace std;

// void sum(int a, int b)
// {
//     cout << a + b;
// }

// void max(int a,int b){
//     if (a>b)
//     {
//         cout<<a;
//     }
//     else{
//         cout<<b;
//     }
// }

// void EvenOdd(int a){
//     if (a%2==0)
//     {
//         cout<<"even";
//     }
//     else{
//         cout<<"odd";
//     }
// }

// int sum=1;
// void fact(int a){
//     for (int i = 1; i <=a; i++)
//     {
//        sum=sum*i;

//     }
//       cout<<sum;
// }

// void SumDigit(int a)
// {
//     int temp = 0;
//     while ( a > 0)
//     {
//          temp = a % 10 + temp;
//        a= a / 10;
//     }
//     cout<<temp;
// }

// void Prime(int no)
// {
//     if (no < 2)
//     {
//         cout << "not prime";
//         return;
//     }
//     for (int i = 2; i * i <=no; i++)
//     {

//         if (no % i == 0)
//         {
//             cout << "Not prime";
//             return;

//         }

//     }
//     cout << "Prime";
// }

// void Swap(int &a,int &b){
// int c=a;
// a=b;
// b=c;
// cout<<a<<" "<<b;
// }

// void Square(int a){
// cout<<a*a*a;
// }

void fibo(int n)
{
    int first = 0;
    int second = 1;
    int next = 0;

    for (int i = 0; i <= n; i++)
    {
        next= next + first;
        cout << " " << next;
        first = second;
        second = next;
    }
}

int main()
{
    int a = 10;
    fibo(a);
    return 0;
}