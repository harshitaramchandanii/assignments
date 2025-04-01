//Write a program of to sort the array using templates.
#include<iostream>
using namespace std;
template<typename T,int size>
void sortarr(T(&arr)[size])
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				T temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
int main()
{
	int i;
	int a[5]={1,0,8,4,2};
	cout<<"\nArray before sort =";
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	sortarr(a);
	cout<<"\nArray after sort =";
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	
	return 0;
	
}
