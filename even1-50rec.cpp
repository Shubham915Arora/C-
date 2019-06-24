#include<iostream>

using namespace std;
void even(int i){
	if(i<=50){
		if(i%2==0){
			cout<<i<<"\n";

		}
		even(i+1);
	}
	else 
		return ;
}


int main(){
	
    
    even(1);
	return 0;

}