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

// void reverse(vector<int> &v, int i, int j)
// {
//     if (i >= j) return;
//     swap(v[i], v[j]);
//     reverse(v, i + 1, j - 1);
// }

// void reverseno(int no,int newno){

//     if(no<=0) { cout<<newno; return;}
//     int lastdigit=no%10;
//     no=no/10;
//     newno=newno*10+lastdigit;
//     reverseno(no,newno);
// }

// void OccurrenceOfno(vector<int>no, int target, int count,int stindex)
// {
//     if (stindex>=no.size())
//     {
//         cout<<count;
//         return ;
//     }
//     if(no[stindex]==target){
//         count++;
//     }
//     OccurrenceOfno(no,target,count,stindex+1);
// }

// void minElement(vector<int>&no,int small,int stIndex){

//     if(stIndex==no.size()) {cout<<small; return ;}
//     if(no[stIndex]<=small){
//         small=no[stIndex];
//     }
//     //   small = min(small, no[stIndex]);
//     minElement(no,small,stIndex+1);
// }


// void Palindrome(string name,int st,int end){
//     if(st>=end){
//         cout<<"palindrome";
//         return;
//     }
//     if(name[st]!=name[end]){
//         cout<<"not pal";
//         return;
//     }
//     Palindrome(name,st+1,end-1);
// }

//print all elements

void PrintElem(vector<int>&no,int size){
if(size==no.size())
{
    return;
}
cout<<no[size]<<endl;
PrintElem(no,size+1);
}

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
    // string s="hello";
    //  reverse(s,0,s.size()-1);
    // cout<<s;
    // vector<int> v = {1, 2, 3, 4, 5};
    // reverse(v, 0, v.size() - 1);
    // for (auto x : v)
    // {
    //     cout << x << endl;
    // }

    // int no = 12354;
    // int newno = 0;
    // while (no > 0)
    // {
    //     int lastdigit = no % 10;
    //     newno = newno * 10 + lastdigit;
    //     no=no / 10;
    // }
    // cout << newno;
    // reverseno(no,newno);

    // no of times no occur

    // vector<int>no={1,2,15,3,6,4,16,0};
    // int target = 1;
    // int count = 0;
    // int stindex=0;

    // OccurrenceOfno(no, target, count,stindex);

    // int small=INT_MAX;
    // int stindex=0;

    // minElement(no,small,stindex);

    //palindrome
    // string name="aba";
    // int st=0;
    // int end=name.size()-1;
    // Palindrome(name,st,end);

    
    vector<int>no={1,2,15,3,6,4,16,0};
    int size=0;
    PrintElem(no,size);




    return 0;
}