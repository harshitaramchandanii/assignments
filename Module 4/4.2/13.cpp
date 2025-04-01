//Write a program to find the max number from given two numbers using friend function.
#include<iostream>
using namespace std;
class Number
{
	private: 
	      int num1,num2;
	public:
		void setvalue(int n1,int n2)
		{
			num1=n1;
			num2=n2;
		}
		friend void maxvalues(Number &obj);
		void display()
		{
			cout<<"\n Number1:"<<num1;
			cout<<"\n Number2:"<<num2;
		}
};
void maxvalues(Number &obj)
{
	if(obj.num1>obj.num2)
	{
		cout<<"\n num1 is  maximum.";
	}
	else
	{
		cout<<"\n num2 is maximum.";
	}
}
int main()
{
	Number n1;
	n1.setvalue(60,40);
	n1.display();
	maxvalues(n1);
	return 0;
}
