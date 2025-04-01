// Write a Program of Two 1D Matrix Addition using Operator Overloading 
#include<iostream>
using namespace std;
class Mat
{
	private:
	      int a[100],i,size;
	public:
		void input()
		{
			cout<<"\n Enter The Size:";
			cin>>size;
			for(i=0;i<size;i++)
			{
				cout<<"Enter the element in a["<<i<<"] :";
				cin>>a[i] ;
			}
		}
		void display()
		{
			cout<<"Array is :-";
			for(i=0;i<size;i++)
			{
				cout<<a[i]<<"\n" ;
			}
		}
		Mat operator+(Mat obj)
		{
			Mat temp;
			temp.size=size;
			for(i=0;i<size;i++)
			{
				temp.a[i] =a[i]+obj.a[i];
			}
			return temp;
		}
};
int main()
{
	Mat m1;
	cout<<"\nMatrix1:";
	m1.input();
	m1.display();
	Mat m2;
	cout<<"\nMatrix2:";
	m2.input();
	m2.display();
	Mat m3 =m1 + m2;
	cout<<"\nMatrix is";
	m3.display();
	return 0;
}




