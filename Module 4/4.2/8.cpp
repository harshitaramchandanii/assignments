/*Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading*/
 
 #include<iostream>
 using namespace std;
 class cal{
 	public:
 		
 		void calc(int num1,int num2)
		  {
		  	cout<<"\nAddition is : "<<num1+num2;
		  }
		void calc(double num1,int  num2)
		{
			cout<<"\nSubtraction is : "<<num1-num2;
		}
		void calc(float num1,float num2)
		{
			cout<<"\nMultiplication is :"<<num1*num2;
		}
		void calc(double num1, double num2)
		{
			cout<<"\nDivision is :"<<num1/num2;
		}
 };
 
 int main()
 {
	cal c1;
	c1.calc(4,3);
	cal c2;
	c2.calc(9.6,9);
	cal c3;
	c3.calc(1.5,3.5);
	cal c4;
	c4.calc(10.00f,5.2f);
	return 0;
 }
