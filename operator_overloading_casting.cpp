#include <iostream>

using namespace std ;

class Value
{
private:
	int val ;
public:
	Value() ;
	void get_val() ;
	void show_val() ;
	operator int() ;
};
Value::Value():val(0)
{

}
void Value::get_val()
{
	cin >> val ;
}
void Value::show_val()
{
	cout << val << endl ;
}

Value::operator int()
{
	return val ;
}
int main()
{
	Value v ;
	v.get_val() ;
	v.show_val() ;
	// int x = int(v) ;
	int x = static_cast<int>(v) ;
	cout << x << endl ;

	return 0 ;
}