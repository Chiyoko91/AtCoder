#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b;
    cin>>a>>b;
    a /= 0.08;
    b /= 0.10;
    if(a==b) cout<<a;
    else cout<<-1;
}