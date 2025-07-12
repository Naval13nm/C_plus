#include <iostream>
using namespace std;
int main()
{
    char day;
    cout << "Enter operation" << endl;
    cin >> day;
    int a, b;
    cout << "Enter two numbers" << endl;    
    cin >> a >> b;
    switch (day)
    {
    case '+':
        cout << "Add :"<< a+b << endl;
        break;
    case '-':
        cout << "Subtract"<< a-b << endl;
        break;
    case '*':
        cout << "Multiply"<<a*b << endl;
        break;
    case '/':
        cout << "Divide" <<a/b<< endl;
        break;
    case '%':
        cout << "Modulo" <<a%b<< endl;
        break;

    default:
        cout << "Invalid Operation" << endl;
        break;
    }

    return 0;
}