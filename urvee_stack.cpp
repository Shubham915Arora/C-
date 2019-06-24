#include<iostream>
using namespace std;
class STACK
{
public:
int size=10,top=-1;
int stack[size];
void push();
void pop();
void display();
};
void STACK::push()
{
    int element;
if(top==size-1)
{
cout<<"STACK OVERFLOW";
}
for(int i=1;i<=10;i++)
cout<<"enter element to be inserted in stack:";
cin>>element;
stack[top+1]=element;
top++;
}
void STACK::pop()
{
if (top==-1)
{
cout<<"STACK UNDERFLOW";
}
else
{
int x;
x=stack[top];
cout<<"element deleted:"<<x;
top--;
}}
void STACK::display()
{
if(top==-1)
{
cout<<"STACK UNDERFLOW";
}
else
{
for(int j=1;j<=10;j++)
cout<<stack[top];
}
}
int main()
{
STACK s1;
s1.push();
s1.pop();
s1.display();
}
