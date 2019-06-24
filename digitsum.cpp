#include<iostream>

using namespace std;

int main()
{
	 int n1,n2,sum=0;
	 cout<<"\n Please Enter a number : ";
	 cin>>n1;
	 while(n1>0)
	 {
	 	n2=n1%10;
	 	n1=n1/10;
	 	sum=sum+n2;
	 }
	 cout<<"\n The sum of the Digits of the number is : "<<sum;
	 return 0;
}