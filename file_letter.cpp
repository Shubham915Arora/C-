#include<iostream>

#include<fstream>

using namespace std;

int main()
{
	int vo=0,sp=0,d=0,cn=0,k,k1,k2,wo=0;
	ofstream ofile ;
	ofile.open("letter.txt") ;
	char ch ;
	
	cin.get(ch) ;
	while (!cin.eof()){
		ofile.put(ch) ;
		cin.get(ch) ;
	}	
	ofile.close() ;
	ifstream ifile ;
	ifile.open("letter.txt") ;
	if (!ifile.is_open()){
		cout << "INVALID FILE!!!" << endl ;
		return 1 ;
	}
	
	
	ifile.get(ch) ;
	while (!ifile.eof()){
		k=ch;
		k1=ch+1;
		k2=ch+2;
		if(ch=='a'||ch=='e'||ch=='o'||ch=='i'||ch=='u')
			vo++;
		else if(ch==' ')
			sp++;
		else if(isdigit(ch))
			d++;
		if(k!=32&&k1==32&&k2!=32)
			wo++;
		else 
			cn++;
		ifile.get(ch) ;
	}	
	ifile.close() ;
	cout<<"\n number of vowels in the file are "<<vo;
	cout<<"\n number of spaces in the file are "<<sp;
	cout<<"\n number of consonents are "<<cn;
	cout<<"\n number of digits are "<<d;
	cout<<"\n number of words in the statment are "<<wo;
	return 0 ;

}