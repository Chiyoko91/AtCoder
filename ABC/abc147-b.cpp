#include<bits/stdc++.h>
using namespace std;

int main()
{
    int flg=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length()/2;i++)
    {
        if(s[i]!=s[s.length()-1-i]) flg++;
    }
    cout<<flg;
}