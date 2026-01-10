#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Ride Menu:"<<endl;
    cout<<"1.Bike Ride: 50/km"<<endl;
    cout<<"2.Auto Ride: 80/km"<<endl;
    cout<<"3.Cab Ride: 120/km"<<endl;
    cout<<"4.Delivery Ride: 60/km"<<endl;

    int NoOfRideBooked;
    cout<<"Enter no of rides you want to book: "<<endl;
    cin>>NoOfRideBooked;

    int BikeCount=0, AutoCount=0, CabCount=0, DeliveryCount=0;
    int totaldistance=0;
    int Bill=0;

    for(int i=1; i<=NoOfRideBooked; i++) {

        int rideno;
        cout<<"enter ride no"<<endl;
        cin>>rideno;

        int distance;

        if(rideno==1 && BikeCount==0) {
            cout<<"enter distance you wants to travel: "<<endl;
            cin>>distance;
            if(distance>0) {
                Bill += distance*50;
                BikeCount++;
                totaldistance += distance;
            } else cout<<"distance can't be zero or negative"<<endl;
        }

        else if(rideno==2 && AutoCount==0) {
            cout<<"enter distance you wants to travel: "<<endl;
            cin>>distance;
            if(distance>0) {
                Bill += distance*80;
                AutoCount++;
                totaldistance += distance;
            } else cout<<"distance can't be zero or negative"<<endl;
        }

        else if(rideno==3 && CabCount==0) {
            cout<<"enter distance you wants to travel: "<<endl;
            cin>>distance;
            if(distance>0) {
                Bill += distance*120;
                CabCount++;
                totaldistance += distance;
            } else cout<<"distance can't be zero or negative"<<endl;
        }

        else if(rideno==4 && DeliveryCount==0) {
            cout<<"enter distance you wants to travel: "<<endl;
            cin>>distance;
            if(distance>0) {
                Bill += distance*60;
                DeliveryCount++;
                totaldistance += distance;
            } else cout<<"distance can't be zero or negative"<<endl;
        }

        else if(rideno>=1 && rideno<=4) {
            cout<<"one user can't book multiple same ride"<<endl;
        }

        else {
            cout<<"invalid ride no"<<endl;
        }
    }

    cout<<"Total Distance: "<<totaldistance<<endl;
    cout<<"Bill Before discount/service charge: "<<Bill<<endl;

    if(DeliveryCount == NoOfRideBooked && NoOfRideBooked > 0) {
        Bill = Bill - (Bill * 15) / 100;
        cout<<"15% Delivery discount applied"<<endl;
    }

    else if(Bill > 500) {
        Bill = Bill - (Bill * 10) / 100;
        cout<<"10% discount applied"<<endl;
    }

    else if(Bill < 200 && Bill > 0) {
        Bill = Bill + 30;
        cout<<"30 rs service charge applied"<<endl;
    }

    if(Bill > 0) {
        cout<<"Final Bill: "<<Bill<<endl;
    } else {
        cout<<"Bill can't be negative"<<endl;
    }

    cout<<"Thank you"<<endl;
    return 0;
}
