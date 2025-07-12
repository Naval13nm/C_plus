#include <iostream>
using namespace std;
int main()
{
    int Month;
    cout << "Enter day" << endl;
    cin >> Month;

    switch (Month)
    {
    case 0:
        cout << "January : 31 Days" << endl;
        break;
    case 1:
        int year;
        cout << "Enter year" << endl;
        cin >> year;

        cout << "Feburary" << endl;
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            cout << "29 Days as it is leap year" << endl;
        }
        else
        {
            cout << "28 Days" << endl;
        }

        break;
    case 2:
        cout << "March : 31 Days" << endl;
        break;
    case 3:
        cout << "April" << endl;
        break;
    case 4:
        cout << "May : 31 Days" << endl;
        break;
    case 5:
        cout << "June" << endl;
        break;
    case 6:
        cout << "July : 31 Days" << endl;
        break;
    case 7:
        cout << "August" << endl;
        break;
    case 8:
        cout << "September : 31 Days" << endl;
        break;
    case 9:
        cout << "October" << endl;
        break;
    case 10:
        cout << "November " << endl;
        break;
    case 11:
        cout << "December : 31 Days" << endl;
        break;
    default:
        cout << "Invalid Month" << endl;
        break;
    }

    return 0;
}