#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int h[n];
    for(int i=0;i<n;i++) cin>>h[i];
    if(n==1)
    {
        cout<<"Yes";
        return 0;
    }

    for(int i=n-2;i>=0;i--)
    {
       if(h[i]-1 > h[i+1]) 
       {
           cout<<"No";
           return 0;
       } 

       if(h[i]-1 == h[i+1]) h[i]--;
    }
    cout<<"Yes";
}