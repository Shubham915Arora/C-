#include<iostream>
using namespace std;
void del_char(char str[100],char a);
int main()
{
	char str[100],s;
	cout<<"\n Please Enter a string :";
	cin>>str;
	cout<<"\n Please Enter the charachter you want to delete : ";
	cin>>s;
	del_char(str,s);
	
}
void del_char(char str[100],char a)
{
	int i,j;
	for(i=0,j=0;str[j]!='\0';){
		if(str[j]==a){
			j++;
		}
		else {
			str[i]=str[j];
			i++;
			j++;
		}
	}
	str[i]='\0';
    cout<<str; 
    
}