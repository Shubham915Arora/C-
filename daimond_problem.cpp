#include<iostream>
using namespace std;

class A
{
	int a;
	public :
		void dispA()
		{
			a=10;
			cout<<"Class A"<<a;;

		}
};
class B :public virtual A
{
	int b;
	public :
		void dispB()
		{
			b=20;
			cout<<"\nClass B "<<b;

		}
};
class C : public virtual A
{
	int c;
	public :
		void dispC()
		{
			c=30;
			cout<<"\n Class C ";

		}
};
class D : public B,public C
{
	int d;
	public :
		void dispD()
		{
			d=40;
			cout<<"\n Class D";

		}
};
int main()
{
	D obj;
	obj.dispA(); /* obj.B::dispA */
	obj.dispB();
	obj.dispC();
	obj.dispD();
	return 0;
}