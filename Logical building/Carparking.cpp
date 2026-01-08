#include <iostream>
using namespace std;
int main()
{
    int vehicle;
    cout << "enter number of vehicles " << endl;
    cin >> vehicle;
    if (vehicle > 10 || vehicle <= 0)
    {
        if (vehicle <= 0)
        {
            cout << "value can't be negative\n";
        }

        else
        {
            cout << "not entry";
        }
        return 0;
    }
    cout << "menu:-" << endl;
    cout << "1. BIKE " << endl;
    cout << "2. CAR " << endl;
    cout << "3. TRUCK " << endl;
    int cartotal = 0;
    int biketotal = 0;
    int trucktotal = 0;
    for (int i = 1; i <= vehicle; i++)
    {
        string name;
        cout << "enter " << i << " vechicle name " << endl;
        cin >> name;
        int hours;
        cout << "enter number of hours your parked " << endl;
        cin >> hours;
        if (name == "car" || name == "CAR" || name == "cars")
        {
            cartotal += hours * 50;
        }
        else if (name == "bike" || name == "BIKE" || name == "bikes")
        {
            biketotal += hours * 20;
        }
        else if (name == "truck" || name == "TRUCK" || name == "trucks")
        {
            trucktotal += hours * 100;
        }
        else
        {
            cout << "Invalid vehicle type!\n";
        }
    }
    int total = cartotal + biketotal + trucktotal;
    if (total > 500)
    {
        int discount = (total * 10) / 100;
        total -= discount;
    }
    cout << "total bill is " << total;
}















// #include <iostream>
// #include <cctype>
// using namespace std;

// int main()
// {
//     int vehicle;
//     cout << "Enter number of vehicles: ";
//     cin >> vehicle;

//     if (vehicle > 10 || vehicle <= 0)
//     {
//         if (vehicle <= 0)
//             cout << "Value can't be zero or negative\n";
//         else
//             cout << "No entry\n";
//         return 0;
//     }

//     cout << "\nMenu:\n";
//     cout << "1. BIKE\n";
//     cout << "2. CAR\n";
//     cout << "3. TRUCK\n";

//     int cartotal = 0, biketotal = 0, trucktotal = 0;

//     for (int i = 1; i <= vehicle; i++)
//     {
//         string name;
//         int hours;

//         cout << "\nEnter " << i << " vehicle name: ";
//         cin >> name;

//         cout << "Enter number of hours parked: ";
//         cin >> hours;

//         if(hours <= 0){
//             cout << "Invalid hours!\n";
//             continue;
//         }

//         // convert to lowercase
//         for(char &c : name){
//             c = tolower(c);
//         }

//         // remove plural 's'
//         if(name.back() == 's'){
//             name.pop_back();
//         }

//         if (name == "car")
//             cartotal += hours * 50;
//         else if (name == "bike")
//             biketotal += hours * 20;
//         else if (name == "truck")
//             trucktotal += hours * 100;
//         else
//             cout << "Invalid vehicle type!\n";
//     }

//     int total = cartotal + biketotal + trucktotal;

//     if (total > 500)
//     {
//         int discount = total * 10 / 100;
//         total -= discount;
//     }

//     cout << "\nTotal bill is: " << total;
//     return 0;
// }
