#include<iostream.h>
#include<math.h>

using namespace std;
void game();

int main()
{
	int ch;
	cout<<"\n Hello user !! ";
	cout<<" Welcome to the Random World ";
	cout<<"\n Press 1 to start the game  !!!!";
	cin>>ch;
	if(ch==1)
	{
		game();

	}

}
void game()
{
	int a,b;
	randomize(a);
	cout<<"\n Please make a guess of a number ";
	cin>>b;


}