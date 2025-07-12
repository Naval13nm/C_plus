#include <iostream>
using namespace std;
int main()
{
    char day;
    cout << "Enter day" << endl;
    cin >> day;
    switch (day)
    {
    case 'a':
        cout << "excellent" << endl;
        break;
    case 'b':
        cout << "good" << endl;
        break;
    case 'c':
        cout << "average" << endl;
        break;
    case 'd':
        cout << "below average" << endl;
        break;
    case 'f':
        cout << "Fail" << endl;
        break;

    default:
        cout << "Invalid Grade" << endl;
        break;
    }

    return 0;
}