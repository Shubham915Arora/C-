#include<iostream>
#include<string>

using namespace std;
void employee();
void customer();


void staff_member(){
	int ch;
	cout<<"\n Hello Would you Please Tell that which staff you are in ";
	cout<<"\n 1. Matthi ";
	cout<<"\n 2. Fain";
	cout<<"\n 3. Rusk";
	cout<<"\n 4. Biscuit";
	cin>>ch;

}
void owner_menu(){
	int ch;

	cout<<"\n Please Enter Your choice ";
	cout<<"\n 1. See List of Sales man ";
	cout<<"\n 2. See List of Employees ";
	cout<<"\n 3. See Item list with Rates ";
	cout<<"\n 4. Check Sales ";
	cout<<"\n 5. Driver details ";
	cout<<"\n 6. Exit ";
	cin>>ch;
	switch(ch)
	{
           

	}

}
void Owner(){
	char pas[100];
	int i=0;
	cout<<"\n Hello Sir Please Enter Your Pasword ";
	cout<<"\n This Is Just For the Security Reasons ";

	do{
		cin>>pas;
		if(strcmp(pas,"Satish1967")==0){
			cout<<"\n Hello Mr. Satish Arora ";
			owner_menu();
			i=3;

		}
		else if(strcmp(pas,"Harish1970")==0){
			cout<<"\n Heloo Mr. Harish Arora  ";
			owner_menu();
			i=3;

		}
		else if(strcmp(pas,"9811257550")==0){
			cout<<"\n Hello Mr. Jagdish Arora ";
			owner_menu();
			i=3;

		}	
		else if(strcmp(pas,"abhishek1993")==0){
			cout<<"\n Hello Mr. Abhishek Arora ";
			owner_menu();    
			i=3;

		}
			else{

				cout<<"\n Wrong Password  ";
				cout<<"\n Please Try Again ";
				i++;

				}
	}while(i<3);
	if(i==3){
		cout<<"\n Tou have tried to Enter the Pasword for more than 3 times you can not enter the pasword again . ";

	}
}
void Driver(){
	cout<<"\n Please Enter Your name and Pasword ";

}
void Retail(){
	cout<<"\n Heloo Please Enter your name ";

}
void sales_man(){
	cout<<"\n Please Enter Your Choice ";
	cout<<"\n 1. Check Previous records ";
	cout<<"\n 2. Start new Account for the day ";
	cout<<"\n 3  Add New Things to the To today's Record ";

}
void retail_cust(){
	cout<<"\n Hello Customer !! ";
	cout<<"\n Sainik Store Welcomes You Please Enter Your Choice ";

}



int main()
{
	int ch;
	cout<<"\n Heloo !";
	cout<<"\n Welcome To Sainik Store .";
	cout<<"\n Please Enter YOur Choice ";
	cout<<"\n 1. Employee ";
	cout<<"\n 2. Customer ";
	cin>>ch;
	switch(ch){
		case 1:{
			employee();
			break;
		}
		case 2:{
			customer();
			break;

		}
		default:{
			cout<<"\n You Entered a Wrong choce Please Try again !!";
			break;
		}

	}
}
void employee()
{
	char ch1='Y';
	int ch;
	cout<<"\n Hello Employee ";
	cout<<"\n Please Enter your choice :";
	cout<<"\n 1. Staff member ";
	cout<<"\n 2. Owner  ";
	cout<<"\n 3. Driver ";
	cout<<"\n 4. Retail ";
	cin>>ch;
	do{
		switch(ch)
		{
			case 1:{
				staff_member();
				break;
			}
			case 2:{
				Owner();
				break;
			}
			case 3:{
				Driver();
				break;
			}
			case 4:{
				Retail();
				break;
			}
		cout<<"\n Do You Want To Continue on the same menu or you wnat to go back (Y/N) ";
		cin>>ch1;
			}

	}while(ch1=='Y'||ch1=='y');


}

void customer()
{
	
	char ch1;
	int ch;
	cout<<"\n Heloo Customer !! ";
	cout<<"\n We Welcome you to Sainik Store \n and We Hope that you would have a goood time shoppinig with us ";
	cout<<"\n This is our fully self automated shopping portl ";
	cout<<"\n Please Enter your choice ";
	cout<<"\n 1. I want goods for selling ";
	cout<<"\n 2. I want goods for Personal use ";

	do{
		cin>>ch;

		switch(ch)
		{
			case 1:{
				sales_man();
				break;

			
			}
			case 2:{
				retail_cust();
				break;
			}

		}

		cout<<"\n Do you want to continue (y/n) ";
		cin>>ch1;

	}while(ch1=='Y'||ch1=='y'); }
