#include <iostream>
using namespace std;

class Vechile {
private:
    string VechileType;
    string Avg;

public:
//default constructor
    Vechile() {
           
            VechileType= "null";
            Avg = "null";
        }

//parameterized constructor

    Vechile(string VechileType, string Avg) {
       
        this->VechileType = VechileType;
        this->Avg =Avg;
    }
//getter 
    void Showdetails() {
        cout << "Vechile Type: " << VechileType << endl;
        cout << "Average Mileage: " << Avg<<endl;
    }
// setter method 
    void Getdetails(){
        cout<<"Vechile Type:\n";
        cin>>VechileType;
        cout<<"Average Mileage\n";
        cin>>Avg;
    }
};
//genrice function
    void display(Vechile a[],int size,void(Vechile::*func)()){ 
        for(int i=0; i<size;i++){
            (a[i].*func)();
        }
    }


int main() {
 Vechile a[10]= {
        {"Sedan","15"},
        {"SUV","12"},
        {"Hatchback","18"},
        {"Truck","8"},
        {"Motorcycle","40"},
        {"Electric Car","120"},
        {"Hybrid Car","25"},
        {"Minivan","14"},
        {"Coupe","16"},
        {"Convertible","13"}
    };

    // for(int i=0;i<10;i++)
    // {
    //     a[i].Showdetails();
    // }
    display(a, 4, &Vechile::Showdetails);
    display(a, 4, &Vechile::Getdetails);
    display(a, 4, &Vechile::Showdetails);
    return 0;

}

