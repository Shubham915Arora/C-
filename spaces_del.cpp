#include<iostream>
using namespace std;
int main()
{
	char str[100];
	cout<<"\n Please Enter a String :";
	cin.getline(str,100);
    for(int j=0,i=0;str[i]!='\0';){
    	if(str[j]==' ')
    		j++;
    	else{

    	 str[i]=str[j];
    	 i++;
    	 j++;
    	}
    }
    cout<<"\n "<<str;






}