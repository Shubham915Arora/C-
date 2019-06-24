#include <iostream>
#include <cstring>

using namespace std ;

class Person
{
private: // visibility modes
	char name[20] ;
	int age ;
	float salary ;
public:
	// Default Constructor
	Person() ;
	// Overloaded constructor
	Person(char nm[], int a, float f) ;
	// copy constructor
	Person(Person &p) ;
	// Destructor (// - tilde)
	~Person() ;
	// member functions/methods
	void get_val() ;
	void show_val() ;
};
// return_type struct_name::functionname()
Person::~Person()
{
	cout << "Deleting " << name << endl ;
}
Person::Person()
{
	strcpy(name, "Nothing") ;
	age = 0 ;
	salary = 0 ;
}
Person::Person(char nm[], int a, float f)
{
	strcpy(name, nm) ;
	age = a ;
	salary = f ;
}
Person::Person(Person &p)
{
	strcpy(name, p.name) ;
	age = p.age ;
	salary = p.salary ;
}
void Person::get_val() 
{
	cin >> name >> age >> salary ;
}
void Person::show_val()
{
	cout << name << ' ' << age << ' ' << salary << endl ;
}
int main()
{
	Person p ; // object
	Person p2 ;
	// p.get_val() ;
	// p.age = 25 ;
	// p2.get_val() ;
	Person p3("abc", 23, 23000) ;
	Person p4("def", 24, 24000) ;
	Person p5(p3) ;
	p.show_val() ;
	p2.show_val() ;
	p3.show_val() ;
	p4.show_val() ;
	p5.show_val() ;
	// cin >> p.name >> p.age >> p.salary ;
	// cout << p.name << ' ' << p.age << ' ' << p.salary << endl ;
	
	return 0 ;
}