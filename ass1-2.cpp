#include<iostream>

using namespace std;

int main()
{  	
	
	int n1,n2,ch;
	cout<<"\n Please Enter the First Number : ";
	cin>>n1;
	cout<<"\n Please Enter the Second Nunber :";
	cin>>n2;
	cout<<"\n Please Select The Operation You Want To Perform :";
	cout<<"\n 1.Addition(+) ";
	cout<<"\n 2.Subtraction(-)";
	cout<<"\n 3.Multiplication(*)";
	cout<<"\n 4.Division(/)";
	cout<<"\n Please Enter Your Choice (1,2,3,4)";
	cin>>ch;
	switch(ch)
	{
		case 1 :cout<<"\n The Sum  of the 2 numbers is :"<<n1+n2;
		break;
		case 2 :cout<<"\n The diffrence of the 2 numbers is : "<<n1-n2;
		break;
		case 3 :cout<<"\n The Product of the 2 numbers is : "<<n1*n2;
		break;
		case 4 :cout<<"\n The Division of the 2 numbers comes out to be as : "<<n1/n2;
		break;
		default :cout<<"\n You Entered a Wrong choice ";

	}
	return 0;

}