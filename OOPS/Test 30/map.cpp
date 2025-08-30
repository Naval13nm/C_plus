#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<string, int> studentMarks;

    studentMarks["ravan"] = 85;
    studentMarks["Babli"] = 92;
    studentMarks["lux"] = 78;

    cout << "Student Marks:\n";
    for (const auto &entry : studentMarks)
    {
        cout << "Name: " << entry.first << ", Marks: " << entry.second << endl;
    }

    return 0;
}