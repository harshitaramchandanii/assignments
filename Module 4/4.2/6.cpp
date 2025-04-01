/*Create a class person having members name and age. Derive a class student having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.Write also Main function (Multiple Inheritance)*/
#include<iostream>
using namespace std;
class Person{
	public:
		void data(string name,int age)
		{
			cout<<"\nName of person is : "<<name;
			cout<<"\nAge of person is : "<<age;
		}
};
class Student
{
	public:
		void percentage()
		{
			double per;
			cout<<"\nPercentage is "<<per;
	}
};
class Teacher: public Person,public Student 
{
	public:
		void salary()
		{
			int sal;
			cout<<"\nSalary is "<<sal;
		}
};
int main()
{
	int age,sal;
	string name;
	double per;
	cout<<"\nEnter the name =";
	cin>>name;
	cout<<"\nEnter the age =";
	cin>>age;
	cout<<"\nEnter the percentage = ";
	cin>>per;
	cout<<"\nEnter the Salary = ";
	cin>>sal;
	Teacher t;
	t.data(name,age);
	t.percentage();
	t.salary();
	return 0;
}
