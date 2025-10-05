#include<bits/stdc++.h>
using namespace std;
class Node
{
    private:
    string MedicineType;
    string AvgDos;

    public:

    Medicine()
    {
        MedicineType="null";
        AvgDos="null";
    }

    Medicine(string MedicineType,string AvgDos){
        this->MedicineType=MedicineType;
        this->AvgDos=AvgDos;
    }

    void display()
    {
        cout<<MedicineType<<" "<<AvgDos<<"\n";
    }

    void Getdetails(){
        cout<<"Medicine Type:\n";
        cin>>MedicineType;
        cout<<"Avg Dosage\n";
        cin>>AvgDos;
    }

};

int main()
{
    Medicine a[2]={
        {"pcm","1"},
        {"orasol","1"},
    };

    // for (int i = 0; i < 2; i++)
    // {
    //     a[i].display();
    // }
    
    ForLoopDisplay(a,2,&Medicine::display);
    ForLoopDisplay(a,2,&Medicine::Getdetails);
    ForLoopDisplay(a,2,&Medicine::display);
    return 0;
}