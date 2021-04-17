#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    int i,cnt=0;
    char s[100];
    cin>>s;

    for(i=0;i<strlen(s);i++)
    {
        if((i+1)%2==1&&s[i]!='L')
        {
            cnt++;
        }
        if((i+1)%2==0&&s[i]!='R')
        {
            cnt++;
        }
    }
    if(cnt==strlen(s))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}