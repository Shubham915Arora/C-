#include<iostream>
using namespace std;
int calc(int,int);

int main()
{
  cout<<"\n Hello User ";
  int num,power,ans;
  cout<<"\n Please Enter the number ";
  cin>>num;
  cout<<"\n Please Enter the Power ";
  cin>>power;
  ans=calc(num,power);
  cout<<"\n The Answer to the problem is : "<<ans;

}
int calc(int a,int b)
{
  int c=1;
  for(int i=0;i<b;i++)
  {
    c=c*a;
  }
  return c;
}
