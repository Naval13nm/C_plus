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