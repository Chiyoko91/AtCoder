#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int a,b,ans,tmp,r;
    
    cin>>a>>b;
    

    ans=a*b;
    
    if(a<b)
    {
        tmp=a;
        a=b;
        b=tmp;
    }
 
    r=a%b;    
    while(r!=0)
    {
        a=b;
        b=r;
        r=a%b;
    }
    ans/=b;
    cout<<ans;
}