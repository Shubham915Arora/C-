#include <iostream>
using namespace std;

int main()
{
    int i,l,r,k,m=0;
    cout<<"\n Please Enter the value of l,r and k :";
    cin>>l>>r>>k;
    for(i=l;l<=r;l++){
        if(l%k==0){
            m++;
        }
    }

    cout<<"\n Answer :"<<m;
    return 0;
}
