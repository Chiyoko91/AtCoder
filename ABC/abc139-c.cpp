#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,ans=0,cnt=0;
    cin>>n;
    int h[n];
  	cin>>h[0];
    for(i=1;i<n;i++)
    {
        cin>>h[i];
        if(i>0&&h[i]<=h[i-1])
        {
            cnt++;
        }
        else
        {
            if(cnt>ans)
            {
    	        ans=cnt;
            }
            cnt=0;
        }
    }
  	  	if(cnt>ans)
    {
    	ans=cnt;
    }
    cout<<ans;
}