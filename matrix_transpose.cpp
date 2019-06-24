#include<iostream>
using namespace std;
int main()
{
	int m[3][5];
	cout<<"\n Please enter the valuse in matrix : ";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>m[i][j];
		}
	}
	for(int i=0;i<3;i++){
		
			for(int j=0;j<3;j++){
				cout<<m[i][j]<<" ";

			}
			cout<<"\n";

		}

	
    
	cout<<"\n The transpose of the matrix entered by you is :\n";
	for(int i=0;i<3;i++){
		int k;
		for(int j=i+1;j<=3;j++){
			k=m[i][j];
			m[i][j]=m[j][i];
			m[j][i]=k;
             

		}
	}
	for(int i=0;i<3;i++){
		
			for(int j=0;j<3;j++){
				cout<<m[i][j]<<" ";

			}
			cout<<"\n";

		}

	

}