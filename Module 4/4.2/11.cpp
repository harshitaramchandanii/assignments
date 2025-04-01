/*Write a program to calculate the area of circle, rectangle and triangle using
Function Overloading
? Rectangle: Area * breadth
? Triangle: ? *Area* breadth
? Circle: Pi * Area *Area*/
#include<iostream>
#define pi 3.14
using namespace std;
class calc{
	public:
		void area(int l,int width)
		{
			cout<<"\nRectangle area = "<<l*width;
		}
		void area(double len,double w)
		{
			cout<<"\nTriangle area = "<<0.5*len*w;
		}
		void area(int r)
		{
			cout<<"\ncircle area = "<<r*r*pi;
		}
};
int main()
{
	calc c1;
	double len,w;
	int r,l,width;
	cout<<"Enter length= ";
	cin>>len;
	cout<<"Enter the width=";
	cin>>w;
	cout<<"Enter radius = ";
	cin>>r;
	cout<<"Enter length for rectangle =";
	cin>>l;
	cout<<"Enter the width for rectangle ";
	cin>>width;
	c1.area(len,w);
	c1.area(l,width);
	c1.area(r);
	return 0;
}
