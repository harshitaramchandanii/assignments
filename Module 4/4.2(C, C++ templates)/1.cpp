// Write a program of to swap the two values using templates
#include<iostream>
using namespace std;
template<typename T>
void swapvalue(T &x,T &y)
{
	T temp=x;
	x=y;
	y=temp;
}
int main()
{
	int x=50;
	int y=30;
	cout<<"\nValue of x before swap is "<<x;
	cout<<"\nValue of y before swap is "<<y;
	swapvalue(x,y);
	cout<<"\nValue of x after swap is "<<x;
	cout<<"\nValue of y after swap is "<<y;
	return 0;

}
