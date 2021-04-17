#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    double ans;
    for(i=0;i<n;i++)
    {
        ans+=1/(double)a[i];
    }
    ans=1/ans;
    cout<<ans;
}