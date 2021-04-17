#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,cnt=0;
    cin>>a>>b>>c>>d;
    while(a>0&&c>0)
    {
        cnt++;
        if(cnt%2==1) c-=b;
        else a-=d;
    }
    cout<<(a<=0 ? "No":"Yes");
}