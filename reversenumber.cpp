#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	cout<<"\n Please Enter a Number :";
	cin>>n1;
	cout<<"\n The reverse of the number is : ";/
	while(n1>0){
		n2=n1%10;
		n1=n1/10;
		cout<<n2;

	}
	return 0;
}