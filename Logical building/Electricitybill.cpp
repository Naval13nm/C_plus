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







// int customer ;
// 	cout << "Enter Number of Customer = " ;
// 	cin >> customer ;
// 	string name ;
// 	int unit ;
// 	for( int i = 1 ; i <= customer ; i++){
	    
// 	    cout << "Enter Customer Name = " ;
// 	    cin >> name ;
// 	    cout << "Enter Consumed Unit = " ;
// 	    cin >> unit ;
// 	    cout<<endl ;
// 	    int amount ;
// 	    if( unit <= 100 ) amount = unit * 5 ;
// 	    else if( unit >= 101 && unit <=300 ) amount = unit * 7 ;
// 	    else if(unit > 300 ) amount = unit * 10 ;
// 	    if( amount > 2000) amount += (amount*5)/100 ;
	    
// 	    cout << "Customer Name = " << name << endl ;
// 	    cout << "Unit Cunsomed = " << unit << endl ;
// 	    cout << "Total Bill = " << amount << endl ;
// 	}