/*Assume a class cricketer is declared. Declare a derived class batsman from cricketer.
Data member of batsman. Total runs, Average runs and best performance.
Member functions input data, calculate average runs, Display data. (Single Inheritance)*/
#include<iostream>
using namespace std;
class cricketer{
	int a;
	public:
		void set()
		{
			cout<<"Enter the number of player :";
			cin>>a; 
		}
		int get()
		{
			return a;
		}
};
class batsman : public cricketer{
	private:
		int trun,per;
		double avg;
	public:
		void setdata(int trun, int per)
		{
			int player=get();
			this->trun=trun;
			this->avg=trun/player;
			this->per=per;
		}
		void average()
		{
			cout<<"\nAverage runs = "<<avg;
		}
		void dsplay()
		{
			cout<<"\n--Crickter data :--";
			cout<<"\nTotal runs ="<<trun;
			cout<<"\nBest performance ="<<per;
		}
};
int main()
{
	batsman b;
	int trun,per;
	cout<<"Enter Total runs: ";
	cin>>trun;
	cout<<"Enter best performance: ";
	cin>>per;
	b.set();
	b.setdata(trun,per);
	b.dsplay();
	b.average();
	return 0;
}
