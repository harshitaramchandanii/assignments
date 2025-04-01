//WAP to create simple calculator using class
#include<iostream>
using namespace std;
class calc
{
	public:
		double n1,n2;
		void set()
		{
			cout<<"\nEnter the first number :";
			cin>>n1;
			cout<<"\nEnter the second number :";
			cin>>n2;
		}
		void get()
		{
			cout<<"\nAddition is "<<n1+n2;
			cout<<"\nSubtraction is "<<n1-n2;
			cout<<"\nMultiplication is "<<n1*n2;
			cout<<"\nDivision is "<<n1/n2;
			}
};
int main()
{
	calc c;
	c.set();
	c.get();
	return 0;
	
}
