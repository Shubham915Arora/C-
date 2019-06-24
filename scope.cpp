#include<iostream>
using namespace std;
class calc
{
private:
	int a,b,sum;
public:
	int add(){
		cout<<"enter first number:";
		cin>>a;
		cout<<"enter second number:";
		cin>>b;

		sum= a+b;
		cout<<"the sum of two numbere is :"<<sum;

	}
};
int main()
{
	calc c1;
	c1.add();
	
}

