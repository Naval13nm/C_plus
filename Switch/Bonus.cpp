#include <iostream>
using namespace std;
int main()
{
    int bonus, rating, Salary;
    cout << "Enter the Ratings: ";
    cin >> rating;
    cout << "Enter the Salary: ";
    cin >> Salary;
    switch (rating)
    {
    case 0:
        bonus = 0;
        break;
    case 1:
        cout << "Bonus is 10% of Salary" << endl;
        bonus = Salary * 0.10;
        cout << "Bonus is: " << bonus << endl;
        break;
    case 2:
        cout << "Bonus is 20% of Salary" << endl;
        bonus = Salary * 0.20;
        cout << "Bonus is: " << bonus << endl;
        break;
    case 3:
        cout << "Bonus is 30% of Salary" << endl;
        bonus = Salary * 0.30;
        cout << "Bonus is: " << bonus << endl;
        break;
    case 4:
        cout << "Bonus is 40% of Salary" << endl;
        bonus = Salary * 0.40;
        cout << "Bonus is: " << bonus << endl;
        break;
    case 5:
        cout << "Bonus is 50% of Salary" << endl;
        bonus = Salary * 0.50;
        cout << "Bonus is: " << bonus << endl;
        break;
    case 6:
        cout << "Bonus is 60% of Salary" << endl;
        bonus = Salary * 0.60;
        cout << "Bonus is: " << bonus << endl;
        break;
    case 7:
        cout << "Bonus is 70% of Salary" << endl;
        bonus = Salary * 0.70;
        cout << "Bonus is: " << bonus << endl;
        break;
    case 8:
        cout << "Bonus is 80% of Salary" << endl;
        bonus = Salary * 0.80;
        cout << "Bonus is: " << bonus << endl;
        break;
    case 9:
        cout << "Bonus is 90% of Salary" << endl;
        bonus = Salary * 0.90;
        cout << "Bonus is: " << bonus << endl;
        break;
    case 10:
        cout << "Bonus is 100% of Salary" << endl;
        bonus = Salary * 1.00;
        cout << "Bonus is: " << bonus << endl;
        break;

    default:
        cout << "Invalid Rating " << endl;
        break;
    }
    return 0;
}