//Write a program to find the multiplication values and the cubic values using inline function.
#include<iostream>
using namespace std;
class cubic{
	public:
		int a,b;
		void set(int n1,int n2)
		{
			a=n1;
			b=n2;
		}
		inline void display()
		{
			cout<<"\nMultiplication is "<<a*b;
			cout<<"\nCube of a is "<<a*a*a;
			cout<<"\nCube of b is "<<b*b*b;
		}
};
int main()
{
	cubic c1;
	int n1,n2;
	cout<<"Enter the value of n1 :";
	cin>>n1;
	cout<<"\nEnter the value of n2 :";
	cin>>n2;
	c1.set(n1,n2);
	c1.display();
	return 0;
	
}
