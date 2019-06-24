#include<iostream>

using namespace std;
int main()
{
	 int n1,n2,n3,sum ;
	 cout<<"\n Please Enter the number : ";
	 cin>>n1;
	 n2=n1%10;
	 while (n1>0){
	 	n3=n1%10;
	 	n1=n1/10;
	 }
	 sum=n2+n3;
	 cout<<"\n The sum of the 1st and the last digit of the number is : "<<sum;
	 return 0;

}