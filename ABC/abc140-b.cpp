#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];//i番目の料理
    int b[n];//i番目の料理で得る満足度
    int c[n-1];//iを食べた直後にi+1を食べると追加で上がる満足度
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        a[i]--;
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>c[i];
    }
    
    int ans=b[a[0]];
    i=1;
    while(1)
    {
        ans += b[a[i]];
        if(a[i]==a[i-1]+1)
        {
            ans += c[a[i-1]];
        }
        i++; 
      if(i>=n)break;
    }

    cout<<ans<<endl;
}