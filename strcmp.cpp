#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	char a[100],b[100];
	int i,j;
	cout<<"\n Please Enter a String : ";
	cin>>a;
	cout<<"\n Enter another string  : ";
	cin>>b;
	i=0;
	j=0;
	while(a[i]!='\0'&&b[j]!='\0'){
	
		if(a[i]!=b[i]){
			cout<<"\n The 2 strings dont match ";
			exit(0);
		
		}
		i++;
		j++;
	}
	cout<<"\n The 2 strings match ";
	


}