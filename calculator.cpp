#include<iostream>
using namespace std;
int main()
{
 	int a,b,ch,ans;
 	cout<<"\n Please Enter the 1st number ";
 	cin>>a;
 	cout<<"\n Please Enter the 2nd number ";
 	cin>>b;
 	cout<<"\n Please Enter the opration you want to perform ";
 	cout<<"\n ADD";
 	cout<<"\n Subtract ";
 	cout<<"\n Product ";
 	cout<<"\n Divide ";
 	cin>>ch;
 	if(ch==1)
 	{
 		ans=a+b;
 		cout<<"\n Sum f the 2 numbers is "<<ans;

 	}
 	else if(ch==2)
 	{
 		ans=a-b;
 		cout<<"\n Diffrence between the 2 numbers is "<<ans;

 	}
 	else if(ch==3)
 	{
 		ans=a*b;
 		cout<<"\n Product of the 2 numbers is "<<ans;

 	}
 	else if(ch==4)
 	{	
 		ans=a/b;
 		cout<<"\n After Dividing the 2 numbers you get "<<ans;

 	}

	else 
	cout<<"\n you have entered a wrrong choice ";

    return 0;

 }




