#include<iostream>
using namespace std;


int sum(int n)
{
	if(n>=10){
		return sum(n/10);

	}
	else 
		return n;
}


int main()

{
    int i,j;
    cout<<"\n Please enter a number to see the sum of its first and last digit  : ";
    cin>>i;
    j=i%10;
    
    cout<<"\n sum of the first and the last digit is :"<<sum(i)+j;  

}