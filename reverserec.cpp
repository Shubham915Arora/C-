#include<iostream>
int g=1;
using namespace std;
 void rev_rec(int x){
   int j;
   if(x>0){
   	j=x%10;
    cout<<j;
    x=x/10;
    rev_rec(x);
   }
   else {
   	return;
   }
   
 }
 int main()
 {
 	int i;
 	cout<<"\n Please enter the number whoose reverse you want to see : ";
 	cin>>i;
    cout<<"\n the reverse of the number Entered by you is : ";
    rev_rec(i);

 }