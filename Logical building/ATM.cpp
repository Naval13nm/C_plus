#include <iostream>
#include <string>

using namespace std;

int main()
{
	int balance=10000;

	int n;
	cout<<"No of Trannsactions to perform"<<endl;
	cin>>n;

	for(int i=1; i<=n; i++) {

		string operation;
		cout<<"enter name"<<endl;
		cin>>operation;

		if(operation=="withdraw") {

			int withdraw;
			cout<<"withdraw amount :"<<endl;
			cin>>withdraw;

			if(withdraw<=5000 && withdraw<=balance) {
				balance=balance-withdraw;
				cout<<"amount withdraw :"<<withdraw<<endl;
				cout<<"avl bal :"<<balance<<endl;
			}

			else
			{
				cout << "Invalid withdraw amount!" << endl;
			}
		}

		else  if(operation=="deposit") {

			int deposit;
			cout<<"deposit amount :"<<endl;
			cin>>deposit;

			balance=balance+deposit;

			cout<<"amount deposit :"<<deposit<<endl;
			cout<<"avl bal :"<<balance<<endl;

		}

		else  if(operation=="balance") {

			cout<<"avl bal :"<<balance<<endl;

		}

		else {
			cout<<"wrong operation";
		}

	}

	return 0;
}




// nt balance = 10000 ;
//     cout << "Welcome to ATM"  << endl;
//     cout << "ATM Services : " << endl ;
//     cout << "1.WITHDRAW" << endl ;
//     cout << "2.DEPOSITE" << endl ;
//     cout << "3.BALANCE ENQUIRY" << endl ;
//     int choice ;
//     cout << "Enter Your Choice = " ;
//     cin >> choice ;
//     if( choice == 1 ){
//         int amount;
//         cout << "Enter Withdraw Amount = " ;
//         cin >> amount ;
//         if( amount > balance){
//             cout << "Amount is Greater than Your Balance " << endl;
//             cout << "AAUKAT MAIN DAAL AMOUNT" ;
//             return 0 ;
//         }
//         else if( amount > 5000){
//             cout << "Your Amount is More than 5000!!!!" ;
//             return 0 ;
//         }
//         balance -= amount ;
//         cout << "Your Balance = " << balance ;
//     }
//     else if( choice == 2 ) {
//         int deposite ;
//         cout << "Enter Deposite Amount = " ;
//         cin >> deposite ;
//         balance += deposite ;
//         cout << "Your Balance = " << balance ;
//     }
//     else if( choice == 3) cout << "Your Balance = " << balance ;
//     else cout << "Enter Valid Number!!" ;