#include<iostream>
#include<cstdlib>
using namespace std;

void ASCII_code()
{
	int i1;
	char a2;
	cout<<"\n Please Enter a charachter :";
	cin>>a2;
	i1=a2;
	cout<<"\n The ASCII value for "<<a2<<" is :"<<i1;

}
void check_vowel(char a3){
	if(a3=='a'||a3=='e'||a3=='i'||a3=='o'||a3=='u')
		cout<<"\n It is Vowel ";
	else {
	cout<<"\n It is a consonent ";	
	}
}
void check_age(int i2){
	if(i2>=0&&i2<13)
		cout<<"\n Child ";
	else if(i2>=13&&i2<18)
		cout<<"\n Teenager";	
	else if(i2>=18)
		cout<<"\n Adult";
	
}
void check_grade(){
	int n[5],t;
	cout<<"\n Please Enter your marks in 5 subjects :";
	for(t=0;t<5;t++)
	{
		cin>>n[t];
	}
	int sum=0;
	for(t=0;t<5;t++){
     sum=sum+n[t];
    }
    if(sum>450)
      cout<<"\n Your grade is 'A' ";
    else if (sum>350&&sum<=450)
      cout<<"\n Your grade is 'B' ";
    else if (sum>250&&sum<=350)
	  cout<<"\n Your grafe is 'C' ";
}
int sum_digit(int i3){
  int sum=0,g;
  while(i3>0){
  	g=i3%10;
  	i3=i3/10;
  	sum=sum+g;
  	 }
  	 return sum;
}

int sumfirstlast(int i4){
	int c1,c2,sum;
	c1=i4%10;
	while(i4>0)
	{
      c2=i4%10;
      i4=i4/10;

	}
	sum=c1+c2;
	return sum;
}

void rev_num(int i5){
	int c;
	while(i5>0){
     c=i5%10;
     cout<<c;
     i5=i5/10;
	}

}
void prime_num(){
	int i=0;
	while(i<50){
		int j=1;
		int k=0;
		while(j<=50){
			if(i%j==0){
				k++;
			}
		    j++;
		}
	if(k==2){
		cout<<i;
		cout<<"\n";
	}	
	i++;
	
}
}
void even_num(){
	cout<<"\n Even numers between 1 and 50 are : ";
	for(int i=1;i<=50;i++){
		if(i%2==0)
			cout<<i<<"\n ";
	}
}
void odd_num(){
	cout<<"\n Odd numbers betwwen 1 and 50 are : ";
	for(int i=1;i<50;i++){
		if(i%2!=0)
			cout<<i<<"\n";
	}
}







int main()
{
	int ch,a,b;
	char a1,ch1;
	do 
	{
		cout<<"\n Please Enter your choice :";
		cout<<"\n 1.  ASCII codes ";
		cout<<"\n 2.  Check Vowel ";
		cout<<"\n 3.  Check age ";
		cout<<"\n 4.  Calculate Grade ";
		cout<<"\n 5.  Sum of Digits ";
		cout<<"\n 6.  Sum of the first and the last digit ";
		cout<<"\n 7.  Reverse of the number ";
		cout<<"\n 8.  Prime numbers from 1-50 ";
		cout<<"\n 9.  Even numbers from 1-50 ";
		cout<<"\n 10. Odd numbers from 1-50 ";
        cout<<"\n 11. to leave ";
        cin>>ch;
		switch(ch){
			case 1: ASCII_code();
			break;
			case 2: cout<<"\n Please enter an Alphabet ";
			        cin>>a1;
			        check_vowel(a1);
			        break ;

			case 3: cout<<"\n Please enter the age ";
			        cin>>a;
			        check_age(a);
			        break;
			case 4: check_grade();
			        break;
			case 5: cout<<"\n Please Enter a number to see the sum of its digits ";
			        cin>>a; 
			        b=sum_digit(a);
			        cout<<"\n Sum of the digits of the number is : "<<b;
			        break;
			case 6: cout<<"\n Please Enter a number :";
			        cin>>a;
			        b=sumfirstlast(a);
			        cout<<"\n sum of first and last numbers is : "<<b;
			        break;
			case 7: cout<<"\n Please enter a number :" ;
                    cin>>a; 
			        rev_num(a);     
			        break;
			case 8: prime_num();
			        break;
			case 9: even_num();
			        break;
			case 10: odd_num();
			         break;

			case 11 : exit(0);
			          
			default : cout<<"\n You Entered a Wrong choice ";
			          break;

        }
		cout<<"\n Do you want to continue (y/n)";
        cin>>ch1;
	}while(ch1=='y'||ch1=='Y');
	return 0;
}

















