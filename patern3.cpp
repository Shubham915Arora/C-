#include<iostream>
using namespace std ;

int main()
{
	int i=1, spaces, j, x = 1;
	int init_spaces = 4 ;
	while (i <= 4){
		spaces = init_spaces ;
		
		while (spaces > 0){
			cout << ' ' ;
			spaces-- ;
		}
		init_spaces -= 1 ;
		j = 1 ;
		while (j <= i){
			cout << x << ' ' ;
			j++ ;
			x++;
		}
		i++ ;
		cout << endl ;
	}

	/*
	int i=1,j,k=1;
	cout<<"\t\t\t\t\t";	
	while(i<=4){
		j=1;
		while(j<=i){
            
			cout<<k;
            k++;
			j++;
			cout<<"\t\t";
		}
		cout<<"\n\n";
		i++;
		int l=5;
		while(l>=j){
			cout<<"\t";
			l--;
		}
	

	}
	
	return 0;

*/	
}     