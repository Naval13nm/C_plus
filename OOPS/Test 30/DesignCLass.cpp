#include <bits/stdc++.h>
using namespace std;

class Climate
{
private:
    vector<string> City;
    vector<vector<int>> Temp;
    vector<vector<int>> Humidity;

public:
    Climate(vector<string> city, vector<vector<int>> temp, vector<vector<int>> humidity)
    {
        City = city;
        Temp = temp;
        Humidity = humidity;
    }

    void Display()
    {
        cout << "[ ";
        for (auto n : City)
        {
            cout << n << " ";
        }
        cout << "] ";

        cout << "[ ";
        for (auto row : Temp)
        {
            cout << "[";
            for (auto val : row)
            {
                cout << val << " ";
            }
            cout << "] ";
        }
        cout << "] ";
        cout << "[ ";
        for (auto row : Humidity)
        {
            cout << "[";
            for (auto val : row)
            {
                cout << val << " ";
            }
            cout << "] ";
        }
        cout << "] ";
        cout << "\n";
    }
};

int main()
{
    vector<Climate> t = {
        {{"New York", "Los Angeles"},
         {{22, 25, 28}, {2, 26, 29}},
         {{55, 57, 60}, {58, 59, 62}}},
        {{"Chicago", "Hindustan"},
         {{20, 23, 26}, {21, 24, 27}},
         {{50, 53, 56}, {51, 54, 7}}}};

    for (auto place : t)
    {
        place.Display();
    }
    return 0;
}
