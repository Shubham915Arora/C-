#include<iostream>

using namespace std;

int main()
{
	int i=1,spaces,j,x=1,z=1,k;
	int init_spaces=4;
	while(i<=4)
	{
		spaces=init_spaces;
	while (spaces > 0){
			cout << ' ' ;
			spaces-- ;

	}
	init_spaces--;
	j=1;
	while(j<=1){
		cout<<x<<"  ";
		j++;
		x++;
		k=j;

	}
	while(k>0){
		cout<<z<<" ";
		k++;
		z++;

	}
	i++;
}

}