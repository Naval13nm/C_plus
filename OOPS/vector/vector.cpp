#include<bits/stdc++.h>
using namespace std;
class Student
{
    private:
        string name;
        int age;
        int rollno;
    public:
        Student()
        {
            name="xxx";
            age=000;
            rollno=000;
        }
        Student(string name,int age, int rollno)
        {
            this->name=name;
            this->age=age;
            this->rollno=rollno;
        }
        void gettermethod()
        {
            cout<<"Enter your name: ";
            cin>>name;
            cout<<"\nEnter your age:";
            cin>>age;
            cout<<"\nEnter your rollno:";
            cin>>rollno;
        }
        void display()
        {
            cout<<"Name: "<<name<<"\n";
            cout<<"Age: "<<age<<"\n";
            cout<<"Rollno: "<<rollno<<"\n";
        }
};
void forloopdisplay(vector<Student>stu, void (Student::*func)() )
{
    for(auto s:stu)
    {
        (s.*func)();
    }
}
int main()
{
    int n;
    vector<Student>stu={
        {"Prajjal",45,86979465},
        {"Kiran",27,65464612},
        {"Payal",45,64641656},
    };
   
    forloopdisplay(stu,&Student::display);
    stu.push_back({"Kavita",25,56465464});
    cout<<"\n\n";
    for(auto s:stu)
    {   
        s.display();
    }
   
   
    cout<<"Enter the object you want to change\n";
    cin>>n;
    stu[n].gettermethod();
   
    cout<<"\n\n";
    for(auto s:stu)
    {
        s.display();
    }
           
}