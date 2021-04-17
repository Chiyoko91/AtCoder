#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    char s[4];
    cin>>s;
    if(s[0] == s[1] && s[1] != s[2] && s[2] == s[3])cout<<"Yes";
    else if(s[0] == s[2] && s[2] != s[1] && s[1] == s[3])cout<<"Yes";
    else if(s[0] == s[3] && s[3] != s[1] && s[1] == s[2])cout<<"Yes";
    else cout<<"No";
}