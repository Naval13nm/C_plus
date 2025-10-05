#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<string, int> studentMarks;

    studentMarks["ravan"] = 85;
    studentMarks["Babli"] = 92;
    studentMarks["lux"] = 78;

    cout << "Student Marks:\n";
    for (const auto firststu : studentMarks)
    {
        cout << "Name: " << firststu.first << " Marks: " << firststu.second << endl;
    }

    return 0;
}