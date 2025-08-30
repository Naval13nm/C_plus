// data hiding ,abstaction ,capsulation
// scopoe resolution mai parents ke marzi se jaata tha aur ussmai vo clss ka hi part hota h par hum bina clss ka part hue krnna chaye to use friend function 
#include<bits/stdc++.h>
using namespace std;
class student{
    private:
        string name;
        int age;
    public:
    student(string name,int age){
        this->name=name;
        this->age=age;
    }
    friend void display(student&obj);
};

void display(student&obj)
{
    cout<<obj.name<<" "<<obj.age<<"\n";

}
int main()
{
    student s("naval",45);
    display(s);
}

