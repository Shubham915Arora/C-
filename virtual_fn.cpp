#include<iostream>
using namespace std;
 
class one
{
public:
    virtual void exec ()
    { cout<< "execution of first class" <<endl; }
 
    void show ()
    { cout<< "show class one" <<endl; }
};
 
class two:public one
{
public:
    void exec ()
    { cout<< "Execution of 2nd class " <<endl; }
 
    void show ()
    { cout<< "show class two" <<endl; }
};
 
int main()
{
    one *o;
    two t;
    
     
    o->exec(); 
   
    o->show(); 
}

