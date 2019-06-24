#include <iostream>

using namespace std ;

class Wife ; // class declaration

class Husband
{
private:
	int hsal ;
public:
	void get_sal() ;
	void add(Wife w) ;
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
	friend class Husband ;
};
void Wife::get_sal()
{
	cin >> wsal ;
}
void Husband::add(Wife w)
{
	cout << "The combined salary: " << this->hsal+w.wsal << endl ;
}
int main()
{
	Husband h ;
	Wife w ;
	h.get_sal() ;
	w.get_sal() ;
	
	h.add(w) ;
	return 0 ;
}
	