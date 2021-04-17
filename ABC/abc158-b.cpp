#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,cnt,ans,i;
    cin>>n>>a>>b;

    cnt = n/(a+b);
    ans = cnt*a;
    cout<<ans;
}