#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,n,count,i;
    cin>>h>>n;

    int a;
    for(i=0;i<n;i++)
    {
        cin>>a;
        h-=a;
    }

    if(h<=0)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}