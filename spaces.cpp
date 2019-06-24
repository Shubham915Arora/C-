#include <iostream>
using namespace std;

int main()
{
    int i,s;
     char S[100001];
    cin>>S;
    s=0;
    for(i=0;i<'\0';i++){
        if(S[i]!=' '){
            s++;
            
        }

    }
    cout<<s;
    return 0;
}
