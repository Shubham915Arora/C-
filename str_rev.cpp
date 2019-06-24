#include<iostream>
using namespace std;
void rev(char a[100]);


int main()
{
	char ch[100];
	cout<<"\n Please Enter a String :";
	cin>>ch;
	rev(ch);
}


void rev(char a[100])
{
	cout<<"\n the reverse of the string is : ";
	int i;
	for(i=99;i>=0;i--){

		cout<<a[i];
	}




}