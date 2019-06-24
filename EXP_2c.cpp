#include<iostream>
using namespace std;
# define Max 1000
class stack
{
  int top;
public:
  
  int a[Max];
  stack()
  {
    top=-1;
  }
  int push(int x)
  {
    if(top>=Max)
      cout<<"\n Stack Overflow ";

    else

      a[top++]=x;


  }
  int pop()
  {
    if(top<0)
    {
      cout<<" stack underflow ";

    }
    else
    {
      int x=a[top--];
      return x;

    }
  }

};
int main()
{
  int ch,x;
  stack s;
  char ch1='y';
  cout<<"\n Hello User !!";
  while(ch1=='y'||ch1=='Y')
  {
    cout<<"\n Please Enter Your choice ";
    cout<<"\n 1. Push ";
    cout<<"\n 2. Pop ";
    cin>>ch;

    switch(ch)
    {
      case 1:
        cout<<"\n Please Enter the element you want to add to the stack ";
        cin>>x;
        s.push(x);
        break;
      case 2:
        cout<<"\n Element Which has been Deleted from the stack is : "<<s.pop();
        break;

    }
    cout<<"\n Do You Want to continue(Y/N) ";
    cin>>ch1;
  }
  return 0;

}
