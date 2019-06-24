#include <iostream>

using namespace std;


class Area

{
	
private:
		
int length, breadth;
	
public:
		
Area()
		
{
			
length = 27;
			
breadth = 28;
		
}
		
Area(int l, int b)
		
{
			
length = l;
			
breadth = b;
		
}
		
void getlength()
		
{
			

cout << "Enter length and breadth: ";
			
cin >> length >> breadth;
		
}
		
int areacal()
		
{
			
return length * breadth;
		
}
		
void display(int temp)
		


{
			
cout << "Area: " << temp << endl;
		
}
};


int main()

{
	
Area A1, A2(3, 2);
	
cout << "Default" << endl;
	
int temp = A1.areacal();
	
A1.display(temp);
	
cout << "Parameterized" << endl;
	
temp = A2.areacal();
	
A2.display(temp);
	
return 0;

}