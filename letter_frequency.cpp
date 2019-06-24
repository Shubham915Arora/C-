#include<iostream>
using namespace std;

void freq(char a[]);



int main()
{
	char ch[100];
	cout<<"\n Please Enter a string :";
	cin>>ch;
	freq(ch);

}
void freq(char a[100]){
	int fr;
	for(int i=0;a[i]!='\0';i++){
		fr=0;
		if(a[i]==a[i+1]){
			i++;
		}
		for(int j=0;a[j]!='\0';j++){
			if(a[i]==a[j])
				fr++;
		}
		cout<<"\n Frequency of '"<<a[i]<<"' ocouring is "<<fr;
	}
}