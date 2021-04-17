#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    char s[3],t[3];
    int i;

    for(i=0;i<3;i++) cin>>s[i];
    for(i=0;i<3;i++) cin>>t[i];
    int count=0;    
    for(i=0;i<3;i++)
    {
        if(s[i]==t[i])count++;
    }
    cout<<count;
}