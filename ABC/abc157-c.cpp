#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i;
    cin>>n>>m;
    int s[m],c[m],num[3]={};
    
    for(i=0;i<m;i++)
    {
        cin>>s[i]>>c[i];
        if((s[i]==1&&c[i]==0) || (c[i]!=num[s[i]-1]&&num[s[i]-1]!=0))
        {
            cout<<-1;
            return 0;
        }
        num[s[i]-1]=c[i];
    }
    if(num[0]==0&&num[1]!=0&&num[2]!=0) cout<<100+num[1]*10+num[2];
    else if(num[0]!=0&&num[1]==0&&num[2]!=0) cout<<num[0]*100+num[2];
    else if(num[0]!=0&&num[1]!=0&&num[2]==0) cout<<num[0]*100+num[1]*10;
    else if(num[0]!=0&&num[1]==0&&num[2]==0) cout<<num[0]*100;
    else if(num[0]==0&&num[1]!=0&&num[2]==0) cout<<100+num[1]*10;
    else if(num[0]==0&&num[1]==0&&num[2]!=0) cout<<100+num[2];
    else cout<<num[0]*100+num[1]*10+num[2];
}