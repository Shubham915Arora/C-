#include<iostream>
using namespace std;

class person{
	protected:

		char name[100],address[100];
		int age;
		double phone;
};
class employee :public person
{
	protected: 
		int ecode;
		float baisic_salry;
	public:
		void get_det(){
			cout<<"\n Please enter the name of the Employee :";
			cin>>name;
			cout<<"\n Please enter the ecode of the employee : ";
			cin>>ecode;
			cout<<"\n Please enter the age of the employee : ";
			cin>>age;
			cout<<"\n Please enter the address : ";
			cin>>address;
			cout<<"\n Please enter the phone number of the employee :";
			cin>>phone;
			cout<<"\n Please enter the baisic salry of the employee : ";
			cin>>baisic_salry;

		}
		void show_det(int e,int n){
			  	for(int i=0;i<n;i++){
			    	if(ecode==e){
            			cout<<"\n Name if the employee is  		:"<<name;
            			cout<<"\n Age of the employee id   		:"<<age;
            			cout<<"\n phone no of the employee 		:"<<phone;
            			cout<<"\n Address of the employee  		:"<<address;
            			cout<<"\n Baisic salary of the employee :"<<baisic_salry;
            			cout<<"\n Total Salary 					:"<<baisic_salry+((10/100)*baisic_salry)+((10/100)*baisic_salry)+((5/100)*baisic_salry);
            	}
            }

		}
		int check_det(int code) ;

};
class customer 
{
	private:
	char name[100],add[100];
	int ac;
	long balance;
	char typ;
    public :
	void input(){
	    cout<<"\n Please Enter the name of the Customer :";
	    cin>>name;
	    cout<<"\n Please Enter the account number of the customer :";
	    cin>>ac;
	    cout<<"\n Please Enter the Address Of the Customer :";
	    cout<<"\n Please Enter the balance of the Customer :";
	    cin>>balance;
	    cout<<"\n Please Enter the Type Of Account : ";
	    cout<<"\n 'S' -> Savings   ";
	    cout<<"\n 'C' -> Current   ";
	    cout<<"\n 'R' -> Recurring ";
	    cin>>typ;
	}
	void display()
	{

	}

};
int employee::check_det(int code)
{
	if (this->ecode == code)
		return 1 ;
	return 0 ;
}
void second_menu(int n){
	int ch;
	employee e[n];
	cout<<"\n Please Enter Your choice :";
	cout<<"\n 1. Input  ";
	cout<<"\n 2. Display";
	cin>>ch;
	switch(ch){
		case 1:{
				for(int i=0;i<n;i++){
				e[i].get_det();

				}
		 break;
		} 
		case 2:{
				int g;
			
				cout<<"\n Please Enter the ecode of the employee you want to search ";
				cin>>g;
				for (int i=0; i<3; i++){
					if (e[i].check_det(g)){
						e[i].show_det(g,n);
						break ;
					}
				}
				e[n].show_det(g,n);
			break;	

		}


	}
}
void menu()
{
	int n;
	customer cst[n];
	char ch;
	cout<<"\n Please Enter Your Choice :";
	cout<<"\n 1. input ";
	cout<<"\n 2. Display ";
	cin>>ch;
	switch(ch){
		case 1:{for(int i=0;i<n;i++){
			cst[i].input();
		}
			break;
		}
		case 2:{}
	}
}

int main()
{   

	char choice;
	int num,ch;
	
	cout<<"\n Please Enter the number of employees for which you want to enter the details ";
	cin>>num;
	do{
		cout<<"\n Please Enter your Choice ";
		cout<<"\n 1. EXIT ";
		cout<<"\n 2. EMPLOYEE ";
		cout<<"\n 3. Customer ";
		cin>>ch;
		switch(ch){
			case 1: {
				break;
			}
			case 2:{second_menu(num);
				 break;}
			case 3:{menu();
			      break;
			 }	 
		    default:{cout<<"\n Your Entered a wrong choice :";
		         break;}
		}
		cout<<"\n do you want to continue (y/n)";
		cin>>choice;
	}while(choice=='y');


}