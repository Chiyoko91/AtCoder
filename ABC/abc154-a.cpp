#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    int a,b,i;
    string s,t,u;
    cin>>s>>t;
    cin>>a>>b;
    cin>>u;

    if(s.compare(u)==0)
    {
        cout<<a-1<<b<<endl;
    }
    else
    {
        cout<<a<<b-1<<endl;
    }
}