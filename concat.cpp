#include<iostream>
using namespace std;
void conc(char a[100],char b[100])
{
	int i,j;
	for(i=0;a[i]!='\0';i++)
		;
	
	for(j=0;b[j]!='\0';j++,i++){
		a[i]=b[j];
	}
    a[i]='\0';

}
int main()
{
	char a[100],b[100];
	cout<<"\n Please Enter the First String :";
	cin>>a;
	cout<<"\n Please Enter the Second String :";
	cin>>b;
	conc(a,b);
	cout<<"\n"<<a;


}