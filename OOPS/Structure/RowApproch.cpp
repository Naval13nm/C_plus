// #include <bits/stdc++.h>
// using namespace std;

// class StudentTable {
// private:
//     vector<string> names;
//     int avg;
//     int count;

// public:
//     StudentTable(vector<string> name, int a, int c) {
//         names = name;
//         avg = a;
//         count = c;
//     }

//     void display() {
//         for (auto n : names) {
//             cout << n << " ";
//         }
//         cout << avg << " " << count << "\n";
//     }
// };

// int main() {
//     vector<StudentTable> t = {
//         StudentTable({"Prajjal", "Rohit"}, 18, 20),
//         StudentTable({"Prajjal", "Ram"}, 81, 50)
//     };

//     for (auto student : t) {
//         student.display();
//     }
// }

//2nd eg

// #include <bits/stdc++.h>
// using namespace std;

// class Symptoms
// {
// private:
//     vector<string>symptoms;
//     int Fees;
//     int WaitingTime;

// public:
//     Symptoms(vector<string>symptom, int a, int b)
//     {
//         symptoms = symptom;
//         Fees = a;
//         WaitingTime = b;
//     }

//     void Display()
//     {
//         for ( auto n:symptoms)
//         {
//             cout << n << " ";
//         }
//         cout << Fees << " " << WaitingTime << "\n";
//     }
// };

// int main()
// {
//     vector<Symptoms> t =
//      {
//         {{"fever", "cough"}, 50, 20},
//         {{"headache", "nausea"}, 60, 15}
//     };

//     for (auto Symptom : t)
//     {
//         Symptom.Display();
//     }
// }


//3rd eg

#include <bits/stdc++.h>
using namespace std;

class Destinations
{
private:
    vector<string>destinations;
    vector<string>Activites;
    int Cost;

public:
    Destinations(vector<string>destination,vector<string>Activity, int b)
    {
        destinations = destination;
        Activites = Activity;
        Cost = b;
    }

    void Display()
    {
 cout<<"["
        for ( auto n:destinations)
        {
            cout << n << " ";
        }

        cout<<" ]";
        
        cout<<" ";

        for ( auto n:Activites)
        {
            cout << n << " ";
        }
        cout  << Cost << "\n";
    }
};

int main()
{
    vector<Destinations> t =
     {
        {{"Paris", "Rome"}, {"SightSeeing","Museum Tour"}, 2000},
        {{"New  york", "India"}, {"Shopping","Broadway Show"}, 1500}
    };

    for (auto destination : t)
    {
        destination.Display();
    }
}
