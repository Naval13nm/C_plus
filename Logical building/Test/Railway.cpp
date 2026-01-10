#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Train Class Menu:"<<endl;
    cout<<"1.Sleeper : 300 per ticket"<<endl;
    cout<<"2.3AC : 800 per ticket"<<endl;
    cout<<"3.2AC : 1200 per ticket"<<endl;
    cout<<"4.1AC : 2000 per ticket"<<endl;

    int NoOfBookings;
    cout<<"Enter number of bookings: "<<endl;
    cin>>NoOfBookings;

    int SleeperCount=0;
    int totalTickets=0;
    int Bill=0;

    for(int i=1; i<=NoOfBookings; i++) {

        int classno;
        cout<<"Enter class number"<<endl;
        cin>>classno;

        int tickets;

        if(classno==1) {
            cout<<"Enter number of tickets"<<endl;
            cin>>tickets;
            if(tickets>0) {
                Bill += tickets * 300;
                SleeperCount++;
                totalTickets += tickets;
            } else {
                cout<<"Ticket count can't be zero or negative"<<endl;
            }
        }

        else if(classno==2) {
            cout<<"Enter number of tickets"<<endl;
            cin>>tickets;
            if(tickets>0) {
                Bill += tickets * 800;
                totalTickets += tickets;
            } else {
                cout<<"Ticket count can't be zero or negative"<<endl;
            }
        }

        else if(classno==3) {
            cout<<"Enter number of tickets"<<endl;
            cin>>tickets;
            if(tickets>0) {
                Bill += tickets * 1200;
                totalTickets += tickets;
            } else {
                cout<<"Ticket count can't be zero or negative"<<endl;
            }
        }

        else if(classno==4) {
            cout<<"Enter number of tickets"<<endl;
            cin>>tickets;
            if(tickets>0) {
                Bill += tickets * 2000;
                totalTickets += tickets;
            } else {
                cout<<"Ticket count can't be zero or negative"<<endl;
            }
        }

        else {
            cout<<"Invalid class number"<<endl;
        }
    }

    cout<<"Total Tickets Booked: "<<totalTickets<<endl;
    cout<<"Bill Before discount/service charge: "<<Bill<<endl;

    if(SleeperCount == NoOfBookings && NoOfBookings > 0) {
        Bill = Bill - (Bill * 10) / 100;
        cout<<"10% Sleeper discount applied"<<endl;
    }

    else if(Bill > 5000) {
        Bill = Bill - (Bill * 12) / 100;
        cout<<"12% discount applied"<<endl;
    }

    else if(Bill < 1000 && Bill > 0) {
        Bill = Bill + 100;
        cout<<"100 rs service charge applied"<<endl;
    }

    if(Bill > 0) {
        cout<<"Final Payable Amount: "<<Bill<<endl;
    } else {
        cout<<"Final amount can't be negative"<<endl;
    }

    cout<<"Booking confirmed. Thank you"<<endl;
    return 0;
}
