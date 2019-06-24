#include <iostream>

using namespace std;

class Distance
{
private:
	int feet;
	int inches;

public:
	void get_val();
	void show_val();
	void add(Distance,Distance);
};

void Distance::get_val()
{
	cin>>feet>>inches;
}



void Distance::show_val()
{
	cout<<feet<<' '<<inches<<endl;
}

void Distance::add(Distance d1,Distance d2)
{

	inches=d1.inches+d2.inches;
	feet=inches/12;
	inches=inches%12;

	feet=feet+d1.feet+d2.feet;
}
int main()
{
	Distance d1;
	Distance d2;
	Distance d3;
	
	d1.get_val();
	d2.get_val();
	d3.add(d1,d2);
	d3.show_val();

	return 0;


}