#include<iostream>
#include<string>
using namespace std;

int main()
{
	int age ;
	char nationality[30];
	cout<<"\n Please Enter your Age and Nationality ";
	cin>>age>>nationality;

	if(age>=18 && strcmp(nationality,"indian")==0)
	{
		cout<<"\n You Are elligible to Vote ";
	}
	else
		cout<<"\n You are not elligible to Vote ";

	return 0;
}