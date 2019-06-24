#include<iostream>
using namespace std;
int main()
{	int n1,n2=1;
	cout<<"\n Please Enter the number of which you want to see the table : ";
	cin>>n1;
	while(n2<=10){
		cout<<n1<<"*"<<n2<<" : "<<n1*n2;
		cout<<endl;
		n2++;

	}
	return 0;
}