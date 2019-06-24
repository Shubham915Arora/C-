#include<iostream>
using namespace std;

class base 
{
	public :
		void disp()
		{
			cout<<"\n Base Class disp ";

		}
		virtual void show()
		{
			cout<<"\n base class Show ";

		}

};
class derived : public base 
{
	void disp()
	{
		cout<<"\n Derived Class disp ";

	}
	void show()
	{
		cout<<"\n Derived Class show ";

	}

};
int main()
{
	base *p;
	base objb;
	derived objd;
	p=&objd;
	p->disp();
	p->show();
	p=&objd;
	p->disp();
	p->show();
	return 0;
}