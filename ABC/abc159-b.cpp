#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int flag=0,i;
    
    for(i=0;i<s.length()/2;i++)
    {
        if(s[i]!=s[s.length()-1-i]) flag++;
    }

    for(i=0;i<s.length()/4;i++)
    {
        if(s[i]!=s[s.length()/2-1-i]) flag++;
    }

    for(i=s.length()-1;i>s.length()/2+1;i--)
    {
        if(s[i]!=s[s.length()/2+i-s.length()]) flag++;
    }

    if(flag==0) cout<<"Yes";
    else cout<<"No";
}