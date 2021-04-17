#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    string s[n],str;
    for(int i=0;i<n;i++) cin>>s[i];
    
    int ans=1;
    sort(s,s+n);
    str = s[0];
    for(int i=1;i<n;i++)
    {
        if(s[i]!=str) ans++;
        str = s[i];
    }
    cout<<ans;
}