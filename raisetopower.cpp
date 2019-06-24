#include<iostream>
using namespace std;
int main()
{
	int m,n,i,ans;
	cout<<"\n Please Enter the value of m : ";
	cin>>m;
	cout<<"\n Please Enter the value of n : ";
	cin>>n;
	i=n;
	ans = 1 ;
	while(i>=0){
		ans=ans*m;
		i--;
	}
	cout<<"\n The Final Answer is :"<<ans;
	return 0;
}