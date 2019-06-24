#include<iostream>
using namespace std;
int len(char a[100]){
	int sum=0;
	for(int i=0;a[i]!='\0';i++){
		sum++;
	}
	return sum;
}
int main()
{
	char a[100];
	int i;
	cout<<"\n Please Enter a string :";
	cin>>a;
    i=len(a);
    cout<<"\n length of the string entered by you is :"<<i;
    return 0;
}