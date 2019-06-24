#include<iostream>
int g=1;
using namespace std;
 void factorial(int x)
 {
 	if(x>=1){
 		g=g*x;

 	factorial(x--);
 	}
 	
 	else 
 	    return ;
 	
 	cout<<g; 
 }
 int main()
 {
 	int i;
 	cout<<"\n Please enter the number whoose factorial you want to see : ";
 	cin>>i;
    factorial(i);
    return 0;
 }