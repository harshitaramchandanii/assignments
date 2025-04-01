/*Define a class to represent a bank account. Include the following members:
1. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
2. Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance*/

#include<iostream>
using namespace std;
class bankaccount
{
	private:
		string name;
		double acno;
		string type;
		double bal,dep,with;
	public:
		void set()
		{
			cout<<"Enter your name ";
			cin>>name;
			cout<<"Enter your account number ";
			cin>>acno;
			cout<<"Enter the type of your account (current/saving) ";
			cin>>type;
		}
		void deposite()
		{
			cout<<"Enter the amount to deposite ";
			cin>>dep;
			bal=bal+dep;
		}
		void displaybal()
		{
			cout<<"\nBalance is "<<bal;
		}
		void withdraw()
		{
			cout<<"\nEnter the amount to withdraw ";
			cin>>with;
			bal=bal-with;	
		}
		void displaydetails()
		{
			cout<<"\nName is :-"<<name;
			cout<<"\nAccount number is  :-"<<acno;
			cout<<"\nAccount type is :-"<<type;
		}
};

int main()
{
	bankaccount b1;
	b1.set();
	b1.deposite();
	b1.displaybal();
	b1.withdraw();
	b1.displaydetails();
	b1.displaybal();
	return 0;
}

