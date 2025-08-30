#include<bits/stdc++.h>
using namespace std;

class Student {
private:
    string Name;
    int Age;
    int Marks;

public:

    Student(string name, int age,int marks) {
       Name=name;
       Age=age;
       Marks=marks;
    }

    void Showdetails() {
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age<<endl;
        cout << "Marks: " << Marks<<endl;
    }

};

    void display(Student a[],int size,void(Student::*func)()){ 
        cout<<"\n";
        for(int i=0; i<size;i++){
            (a[i].*func)();
            cout<<"\n";
        }
    }


int main() {
 Student a[10]= {
        {"Sedan",15,54},
        {"SUV",55,44},
        {"UV",55,44},
        {"V",55,44},
        {"SUV",55,44},
        {"SUV",55,44},
        {"SUV",55,44},
        {"SUV",55,44},
        {"SUV",55,44},
        {"SUV",55,44},
        
    };

    display(a, 10, &Student::Showdetails);
    return 0;

}

