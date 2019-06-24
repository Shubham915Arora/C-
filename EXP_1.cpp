#include<iostream>
using namespace std;
class measure 
{
	private :
	    int feet,inches;
	public:
		measure()
		{
			feet=0;
			inches=0;
		}
		void set_data(int);
		void display();


};
void measure :: set_data(int i)
{
	feet=i/12;
	inches=i%12;

}
void measure :: display()
{
	cout<<"\n The Distance Entered by you can be written as "<<feet<<"feet and "<<inches<<"inches";

}
int main()
{
	int inches;
	measure obj;
	cout<<"\n Hello User ";
	cout<<"\n Please Enter the data in Inches ";
	cin>>inches;
	obj.set_data(inches);
	obj.display();

}