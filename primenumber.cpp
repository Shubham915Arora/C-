#include<iostream>
using namespace std;
/*
int main()
{
	int i=0,j,k;
	cout<<"\n Prime Numbers between 1 and 50 are : ";
	while(i<50){
		j=1;
		k=0;
		while(j<=50){
			if(i%j==0){
				k++;
			}
		    j++;
		}
	if(k==2){
		cout<<i;
		cout<<"\n";
	}	
	i++;
	}
	
}
*/
int main()
{
	int i,j,flag;
	i=2;
	while(i<=50){
		flag=0;
		j=2;

		while(j<=i/2){
			if(i%j==0){
				flag=1;
				break;
				
				}
				j++;
			}
		if(!flag){
			cout<<i<< " ";
		}
		i++;
		}
}

	