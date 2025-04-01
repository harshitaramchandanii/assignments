//Write a program of Addition, Subtraction, Division, Multiplication using constructor
#include<iostream>
using namespace std;
class calc{
	public:
	double a1,b1;
		calc(double a,double b)
		{
			a1=a;
			b1=b;
		}
		void add()
		{
			cout<<"\nAddition is :-"<<a1+b1;
		}
		void sub()
		{
			cout<<"\nSubtraction is :-"<<a1-b1;
		}
		void mul()
		{
			cout<<"\nMuliplication is :-"<<a1*b1;
		}
		void div()
		{
			if(b1!=0)
			{
				cout<<"\n Division is :-"<<a1/b1;
			}
			else
			{
				cout<<"B1 cannot be 0";
			}
		}
};
int main()
{
	int a,b;
	cout<<"Enter the 1st number ";
	cin>>a;
	cout<<"\nEnter the 2nd number ";
	cin>>b;
	
	calc c1(a,b);
	c1.add();
	c1.sub();
	c1.mul();
	c1.div();
}
