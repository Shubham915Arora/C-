#include<iostream>
#include<fstream>

using namespace std;

void file_get_duplicate();




int main()
{

	file_get_duplicate();
	return 0;


}
void  file_get_duplicate()
{
	
	ofstream f1,f2;
	ifstream f3;
	f1.open("/Users/shubhamarora/Documents/c++/file1.txt");
	f2.open("/Users/shubhamarora/Documents/c++/file2.txt");
	f3.open("/Users/shubhamarora/Documents/c++/file1.txt");

	char ch;
	cout<<"\n Hello please Enter something in the file ";
	cin>>ch;
	while (!cin.eof()){
		f1<<ch;
		cin>>ch;

	}f1.close();
	f3.get(ch);
	while (!cin.eof()){
		f2.put(ch);
		f3.get(ch);
	}
	
	f2.close();
	f3.close();

}