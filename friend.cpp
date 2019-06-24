#include <iostream>

using namespace std ;

class Wife ; // class declaration

class Husband
{
private:
	int hsal ;
public:
	void get_sal() ;
	// friend's declaration
	friend void add(Husband, Wife) ;
};
void Husband::get_sal()
{
	cin >> hsal ;
}
class Wife
{
private:
	int wsal ;
public:
	void get_sal() ;
	friend void add(Husband, Wife) ;
};
void Wife::get_sal()
{
	cin >> wsal ;
}
void add(Husband h, Wife w)
{
	cout << "The combined salary: " << h.hsal+w.wsal << endl ;
}
int main()
{
	Husband h ;
	Wife w ;
	h.get_sal() ;
	w.get_sal() ;
	
	add(h, w) ;
	return 0 ;
}
	