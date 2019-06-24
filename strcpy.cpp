#include<iostream>
using namespace std;
int main()
{
   char a1[100],a2[100];
   cout<<"\n Please Enter String 1 :";
   cin>>a1;
   for(int i=0;a1[i]!='\0';i++){
   	a2[i]=a1[i];

   }
   cout<<"\n THE copied string is :"<<a2;
   return 0;

}