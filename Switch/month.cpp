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
        cout << "January" << endl;
        break;
    case 1:
        cout << "Feburary" << endl;
        break;
    case 2:
        cout << "March" << endl;
        break;
    case 3:
        cout << "April" << endl;
        break;
    case 4:
        cout << "May" << endl;
        break;
    case 5:
        cout << "June" << endl;
        break;
    case 6:
        cout << "July" << endl;
        break;
    case 7:
        cout << "August" << endl;
        break;
    case 8:
        cout << "September" << endl;    
        break;
    case 9: 
        cout << "October" << endl;
        break;
    case 10:
        cout << "November" << endl;
        break;      
    case 11:
        cout << "December" << endl;
        break;              
    default:
        cout << "Invalid Month" << endl;
        break;
    }

    return 0;
}