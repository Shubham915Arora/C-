#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"\n Enter an Alphabet to check weather it is a vowel or a a consonent : ";
	cin>>ch;
	switch(ch)
	{
		case 'a':cout<<"\n It is a Vowel ";
		break;
		case 'e':cout<<"\n It is a Vowel ";
		break;
		case 'i':cout<<"\n It is a Vowel ";
		break;
		case 'o':cout<<"\n It is a Vowel ";
		break;
		case 'u':cout<<"\n It is a Vowel ";
		default :cout<<"\n It is a Consonent ";
 	}
    return 0;	
}