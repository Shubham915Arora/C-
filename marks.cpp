#include<iostream>
using namespace std;

int main()
{
	int a1,a2,a3,a4,a5,sum;
	cout<<"\n Please Enter your marks in the following subjects : ";
	cout<<"\n English :";
	cin>>a1;
	cout<<"Maths :";
	cin>>a2;
	cout<<"\nPhysics :";
	cin>>a3;
	cout<<"\nChemistry :";
    cin>>a4;
    cout<<"\n cs";
    cin>>a5;
    sum=a1+a2+a3+a4+a5;
    cout<<"\n Sum : "<<sum;
    if(sum>450)
     	cout<<"\nGrade of the student is A";
    else if (sum>350&&sum<=450)
     	cout<<"\n Grade of the student is B " ;

    else if (sum>250&&sum<=350)
     	cout<<"\n Grade of the student is C ";

  	else 
  		cout<<"\n Try again";

    
    return 0; 
}
