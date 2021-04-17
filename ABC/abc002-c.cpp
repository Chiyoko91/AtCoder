#include<bits/stdc++.h>
using namespace std;

int main()
{
    int xa,ya,xb,yb,xc,yc;
    double ans;
    cin>>xa>>ya>>xb>>yb>>xc>>yc;
    ans = abs((xb-xa)*(yc-ya)-(yb-ya)*(xc-xa))/2.0;
    cout<<fixed<<setprecision(2)<<ans;
}