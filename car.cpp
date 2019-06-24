#include<iostream>
using namespace std;
class tollbooth
{
  private:
    unsigned int car_total;
    double cash_total;
  public:
    tollbooth()
    {
      car_total=0;
      cash_total=0;
    }
    void pay_car()
    {

      car_total=car_total+1;
      cash_total=cash_total+0.50;

    }
    void non_pay_car()
    {
      car_total=car_total+1;

    }
    void display()
    {
      cout<<"\n The Number of cars passing the tool booth are : "<<car_total;
      cout<<"\n The Amount to be collect from the cars is : "<<cash_total;

    }


};
int main()
{
  tollbooth tb;
  int ch=0;
  char ch2='y';
  cout<<"\n Hello User";
  while(ch2=='y')
  {
    cout<<"\n Please Enter Your Choice ";
    cout<<"\n1. Pay Car ";
    cout<<"\n2. Non Pay Car ";
    cout<<"\n3. Display";
    cin>>ch;
    switch(ch)
    {
      case 1:
      {
        tb.pay_car();
        break;
      }
      case 2:
      {
        tb.non_pay_car();
        break;
      }
      case 3:
      {
        tb.display();
        break;

      }
      default :
      cout<<"\n You Entered a Wrong choice !!\n Please Try again";

    }
    cout<<"\n Do you want to continue ?(y/n) ";
    cin>>ch2;
  }
}
