#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ans=0;
    char a[5],b[5];
    string hoge; 
    cin>>a>>b;

    for(int i=(int)strtol(a,NULL,10);i<=(int)strtol(b,NULL,10);i++)
    {
        hoge=to_string(i);
        if(hoge[0]==hoge[4]&&hoge[1]==hoge[3]) ans++;
    }
    cout<<ans<<endl;
}