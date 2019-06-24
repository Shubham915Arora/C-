#include<iostream>
using namespace std;

int main()
{
	int arr[10],sum;
	cout<<"\n Please Enter the values in the array :";
	for (int i=1;i<=10;i++)
	{
		cin>>arr[i];

	}
	for(int k=10;k>=0;k--){
		if(k!=0){
			sum=0;
			for (int j=1;j<=k;j++){
				sum=sum+arr[j];
			}
		}
		cout<<"\n The sum of the first "<<k<<" values is : "<<sum;		

	}
}