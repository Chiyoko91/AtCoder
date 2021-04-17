#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,k;
    cin>>a>>b>>k;
    for(int i=0;i<k;i++)
    {
        if(a>0) a--;
        else if(b>0) b--;
        else break;
    }
    cout<<a<<" "<<b;
}