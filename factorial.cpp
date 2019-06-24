#include<iostream>
using namespace std;

int main()
{
	int n,i,fac=1;
	cout<<"\n Please Enter the number whoose factorial you want to see : ";
 	cin>>n;
    i=n;
    while(i>0)
 	{
 		cout<<i<<"*";
 		fac=fac*i;
 		i--;

 	}
 	cout<<"\b="<<fac;
 	return 0;
}