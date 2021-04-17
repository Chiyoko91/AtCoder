#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    int i;
    char s[4];
    cin>>s;
    for(i=0;i<3;i++)
    {
        if(s[i]==s[i+1])
        {
            cout<<"Bad";
            return 0;
        }
    }
    cout<<"Good";
}
