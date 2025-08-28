//scope resolution to access function declared  in the class outside in main function amd in main functionn it is defined 

#include <bits/stdc++.h>
using namespace std;

class DestinationTable {
private:
    vector<string> destination;
    vector<string>activities;
    int cost;

public:
    DestinationTable(vector<string> name, vector<string>act, int c) {
        destination = name;
        activities = act;
        cost = c;
    }
    void display();
};
void DestinationTable:: display() {
       cout<<"[";
        for (auto n : destination) {
            cout << n << ",";
        }
        cout<<"]";
        cout<<"[";
         for (auto a : activities) {
            cout << a << ",";
        }
        cout<<"]";
        cout <<cost<< "\n";
    }

int main() {
    vector<DestinationTable> t = {
        {{"Sydney", "America"}, {"Hiking","Bunjee Jumping"}, 20000},
        {{"Russia", "Australia"}, {"Suba diving","Horse Riding"}, 50000}
    };

    for (auto destination : t) {
        destination.display();
    }
}