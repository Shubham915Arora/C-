#include<iostream>
using namespace std;
void table(int i,int j){
	if(j<=10){
		cout<<i<<"*"<<j<<"="<<i*j;
		cout<<"\n";
        j++;

	}
	else 
		return ;
	table(i,j);
}
int main()
{
   int i,j=1;
   cout<<"\n Please enter the number whoose table you want to see ";
   cin>>i;
   table(i,j);

}