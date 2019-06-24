#include <iostream>

using namespace std ;

class Base
{
private:
	int x ;
public:
	int y ;
	void set_xy() ;
	int return_x() ;
	void show_x() ;
};
void Base::set_xy()
{
	x = 10 ;
	y = 20 ;
}
int Base::return_x()
{
	return x ;
}
void Base::show_x()
{	
	cout << x << endl ;
}
// mode of inheritance
class Derived:private Base
{
private:
	int z ;
public:
	void mult() ;
	void display() ;
};
void Derived::mult()
{
	set_xy() ;
	z = y*return_x() ;
}
void Derived::display()
{
	show_x() ;
	cout << y << ' ' << z << endl ;
}
int main()
{
	Derived d ;
	d.mult() ;
	d.display() ;
	
	return 0 ;
}
/*
class Derived:public Base
{
private:
	int z ;
public:
	void mult() ;
	void display() ;
};
void Derived::mult()
{
	z = y*return_x() ;
}
void Derived::display()
{
	cout << y << ' ' << z << endl ;
}
int main()
{
	Derived d ;
	d.set_xy() ;
	d.mult() ;
	d.show_x() ;
	d.display() ;
	
	return 0 ;
}
*/