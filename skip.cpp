#include<iostream>
using namespace std;
void skip(char ch[100],char ch1)
{
	for(int i=0;ch[i]!='\0';i++){
		if(ch[i]==ch1){
			;

		}
		/*else if(ch[i]==ch1&&ch[i+1]=='\0'){
			break;}*/
		else
		cout<<ch[i];

	}
}



int main()
{
	char ch[100],ch1;
	cout<<"\n Please Eeter a string ";
	cin>>ch;
	cout<<"\n Enter the letter you want to skip ";
	cin>>ch1;
	skip(ch,ch1);

}