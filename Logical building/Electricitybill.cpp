#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"No of customers"<<endl;
    cin>>n;
    
    for(int i=1; i<=n; i++){
        
        string name;
        cout<<"enter name"<<endl;
        cin>>name;
        
        int unit;
        cout<<"unit consumed"<<endl;
        cin>>unit;
        
        if(unit<=100){
            int total=unit*5;
            cout<<"name :"<<name<<endl;
            cout<<"units:"<<unit<<endl;
            cout<<"Total :"<<total<<endl;
        }
        
        else if(unit>=101 && unit<=300){
            int total=unit*7;
            cout<<"name :"<<name<<endl;
            cout<<"units:"<<unit<<endl;
            cout<<"Total :"<<total<<endl;
        }
        
        else if(unit>300 && unit<2000){
            int total=unit*10;
            cout<<"name :"<<name<<endl;
            cout<<"units:"<<unit<<endl;
            cout<<"Total :"<<total<<endl;
        }
        
        else{
            int total=unit*10+(unit*10*5)/100;
            cout<<"name :"<<name<<endl;
            cout<<"units:"<<unit<<endl;
            cout<<"Total :"<<total<<endl;
            
        }
        
        
    }

    return 0;
}