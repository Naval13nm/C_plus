#include <iostream>
using namespace std;
int main()
{
    int day;
    cout << "Enter day" << endl;
    cin >> day;
    switch (day)
    {
    case 0:
        cout << "Sunday" << endl;
        break;
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
        // case 7:
        //     cout << "Invalid day" << endl;
        //     break;

    default:
        cout << "Invalid day" << endl;
        break;
    }

    return 0;
}