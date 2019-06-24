#include<iostream>
using namespace std;
struct node
{
  int info ;
  struct node *next ;

};
class linked_list
{
  private:
    node *head,*tail;
  public:
    linked_list()
    {
      head=NULL;
      tail=NULL;

    }
    void make_node(int n)
    {
      node *tmp = new node;
      tmp->info=n;
      tmp->next=NULL;
      if(head==NULL)
      {
        head=tmp;
        tail=tmp;

      }
      else
      {
         tail->next=tmp;
         tail=tail->next;
      }
    }


};
int main()
{
  linked_list a;
  cout<<"\n Hello user !!";
  int n;
  char ch1='y';
  while(ch1=='y')
  {
    cout<<"\n Please Enter a number in the linked lidt ";
    cin>>n;
    a.make_node(n);
    cout<<"\n Do You want to continue (y/n) ";
    cin>>ch1;

  }

  return 0;
}
