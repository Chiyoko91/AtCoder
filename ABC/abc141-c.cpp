#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    int n,k,q,i,j;
    cin>>n>>k>>q;
    int a[q];
    for(i=0;i<q;i++)cin>>a[i];
    int memb[n];
    for(i=0;i<n;i++)memb[i]=k-q;
    
    for(i=0;i<q;i++)
    {
        memb[a[i]-1] += 1; 
    }

    for(i=0;i<n;i++)
    {
        if(memb[i]<=0)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
}