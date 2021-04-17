#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,ans;
    cin>>n;

    if((int)n%2==0) ans = (n/2)/n;
    else ans = (n/2+1)/n;

    cout<<ans;
}