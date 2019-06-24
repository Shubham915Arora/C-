#include<iostream>
using namespace std ;
int main(){
	
	float s1,s2,s3;
	int n;
	cout<<"\n Please enter the 1st side of the triangle ";
	cin>>s1;
	cout<<"\n Please enter the 2nd side of the triangle ";
	cin>>s2;
    cout<<"\n Please enter the 3rd side of the triangle ";
 	cin>>s3;
 	if (s1==s2&&s2==s3){
 			n=1;

 	}
 	else if(s1==s2||s2==s3||s1==s3){
 		n=2;
 	}
 	else {
 		n=3;
 	}

 	
 	
 	switch(n){
 		case 1:cout<<"\n It is an Equlateral triangle ";
 		break;
 		case 2:cout<<"\n It is an Isocellec tirangle ";
 		break;
 		case 3:cout<<"\n IT is a Scaline triangle ";
		break; 	
 	}

 		
}