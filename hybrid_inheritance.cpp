#include <iostream>

using namespace std ;

class Student
{
protected:
	int roll_no ;
public:
	void get_rollno() ;
};
void Student::get_rollno()
{
	cin >> roll_no ;
}
class Marks:public Student
{
protected:
	int sub1 ;
	int sub2 ;
public:
	void get_marks() ;
};
void Marks::get_marks()
{
	cin >> sub1 >> sub2 ;
}
class Sports
{
protected:
	int score ;
public:
	void get_score() ;
};
void Sports::get_score()
{
	cin >> score ;
}
class Total:public Marks, public Sports
{
private:
	int total ;
public:
	void sum() ;
	void show() ;
};
void Total::sum()
{
	total = sub1+sub2+score ;
}
void Total::show()
{
	cout << "Roll NO: " << roll_no << endl ;
	cout << "Marks: " << sub1 << ' ' << sub2 << endl ;
	cout << "Score: " << score << endl ;
	cout << "Total: " << total << endl ;
}
int main()
{
	Total t ;
	t.get_rollno() ;
	t.get_marks() ;
	t.get_score() ;
	t.sum() ;
	t.show() ;
	
	return 0 ;
}