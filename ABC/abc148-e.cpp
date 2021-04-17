#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,ans=0;
    long long int f;
    cin>>N;
    if(N%2!=0)
    {
        cout<<"0";
        return 0;
    }

    ans=f/10;
    ans+=ans/5;
    
    cout<<ans;
}