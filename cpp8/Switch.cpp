#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    char operation;
    cin>>operation;
    switch (operation)
    {
    case '+':
        cout <<a+b;
        break;
    case '-':
        cout <<a-b; 
        break;
    case '*':
        cout <<a*b; 
        break;
    case '/':
        cout <<a/b; 
        break;
        
    default:
        cout << "invalid "; break;
    }

    return 0;
};