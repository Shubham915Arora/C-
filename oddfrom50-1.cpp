#include<iostream>
using namespace std;
int main()
{
	 int n1=50;
	 cout<<"\n Odd numbers from 50 to 1 are :";
	 while(n1>=0){
	 	if(n1%2!=0){
	 		cout<<n1;
	 		cout<<"\n";
	 	}
	 	n1--;
	 }
	 return 0;
}