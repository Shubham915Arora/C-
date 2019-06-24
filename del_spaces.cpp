#include<iostream>
using namespace std;
void del_space(char str[100]);
int main()
{
	char str[100];
	cout<<"\n Please Enter a String :";
	cin.getline(str,100);
	del_space(str);	


}
void del_space(char str[100])
{
  for(int i=0,j=0;str[i]!='\0';){
  	if(str[j]==' '){
  		j++;
  	}
  	else{
  		str[i]=str[j];
  		i++;
  		j++;
  	}
  
    str[i]='\0';
    for(int i=0;str[i]!='0';i++){
    	cout<<str[i];
    }
  }

}