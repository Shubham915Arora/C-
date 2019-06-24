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
	Distance operator+(Distance d) ;
	void operator+=(Distance d) ;
	Distance operator++();
	int operator==(Distance d);
	Distance operator++(int);
};
void Distance:: get_val()
{
	cin>>feet>>inches;
}
void Distance::show_val()
{
	cout<<feet<<' '<<inches<<endl;
}
Distance Distance ::operator +(Distance d)
{
	Distance temp ;
	temp.feet=this->feet+d.feet;
	temp.inches=this->inches+d.inches;
	if(temp.inches>11){
		temp.feet+=1;
		temp.inches-=12;
	}
	return temp ;
		
}
void Distance::operator+=(Distance d)
{
	
	feet=this->feet+=d.feet;
	inches=this->inches+=d.inches;
	if(inches>11){
		feet+=1;
		inches-=12;
	}
	
		
}

Distance Distance::operator++()
{
	Distance temp;
	temp.feet=++feet;
	temp.inches=++inches;
	if(temp.inches>11){
		temp.feet+=1;
		temp.inches-=12;
	}
	return temp;
		
}

Distance Distance::operator++(int) // dummy argument
{
	Distance temp;
	temp.feet=feet++;
	temp.inches=inches++;
	if(temp.inches>11){
		temp.feet+=1;
		temp.inches-=12;
	}
	return temp;
}

int Distance::operator==(Distance d)
{
	if(this->feet==d.feet && this->inches==d.inches){
		return 1;
	}
	else 
		return 0;

}
int main()
{
	Distance d1,d2,d3;
	d1.get_val() ;
	d2.get_val();
	d3 = d1+d2 ;
	d1+=d2 ;
	d2 = ++d1 ;

	d3.show_val();
	d1.show_val();
	d2.show_val();
	if(d1==d2)
		cout<<"same"<<endl;
	else
		cout<<"Not"<<endl;
	d2 = d1++;
	d2.show_val();
	d1.show_val();
	

	return 0 ;
}