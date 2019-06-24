#include <iostream>

using namespace std ;

class Lion
{
protected:
	int lion_no ;
public:
	void get_lion() ;
};
void Lion::get_lion()
{
	cin >> lion_no ;
}
class Tiger
{
protected:
	int tiger_no ;
public:
	void get_tiger() ;
};
void Tiger::get_tiger()
{
	cin >> tiger_no ;
}
class Zoo:public Lion, public Tiger
{
public:
	void show() ;
};
void Zoo::show()
{
	cout << "No. of LIONS: " << lion_no << endl ;
	cout << "No. of TIGERS: " << tiger_no << endl ;
}
int main()
{
	Zoo z ;
	z.get_lion() ;
	z.get_tiger() ;
	
	z.show() ;
	
	return 0 ;
}