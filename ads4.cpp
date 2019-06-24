#include<iostream>
using namespace std;
int add(int,int,int);

int main()
{
  int num1,num2,sum=0;
  cout<<"\n Hello user \n Please Enter the 1st number ";
  cin>>num1;
  cout<<"\n Please Enter the 2nd numner ";
  cin>>num2;

  cout<<"\n Sum of the 2 numbers is :"<<add(num1,num2,sum);;
}
int add(int a,int b,int sum)
{
  sum=a+b;
  return sum;
}
