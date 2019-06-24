#include<iostream>
#include<cstring>

using namespace std();

class book
{
private: 
	char author[100],title[100],publisher[100];
	float price;
	int stock;
public:
	void get_val();
	void show_details();

}
void get_val(){
	cout<<"\n Please Enter the title of the book :";
	cin>>title;
	cout<<"\n Please Enter the Author of the book :";
	cin>>author;
	cout<<"\n Please Enter the name of the publisher :";
	cin>>publisher;
	cout<<"\n Please Enter the price of the book : ";
	cin>>price;
	cout<<"\n Please Enter the stock details  : ";
	cin>>stock;

}
void show_val(){
	char titl[100],auth[100];
	int num;
	cout<<"\n Please enter the title of the book you want : ";
	cin>>titl;
	cout<<"\n Please Enter the author of the book :";
	cin>>auth;
	cout<<"\n Please Enter the number of books you want : ";
	cin>>num;
	for (int i=0;i<k;i++){
		if(strcmp(titl,title)==0&&strcmp(auth,author)==0){
			cout<<"\n Publisher         :"<<publisher[i];
			cout<<"\n Price of the Book :"<<price[i];
			cout<<"\n Stock             :"<<stock[i];

		}
	}	
}


int main()
{
	int n;
	book b[n];	
	cout<<"\n Please Enter the number of books for which you want to Enter the details :";
	cin>>n;
	for(int i=0;i<n;i++){
	    b[i].show_val();

	}

}