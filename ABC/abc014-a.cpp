#include<bits/stdc++.h>
using namespace std;

main()
{
    int a,b;
    cin>>a>>b;
    if(a%b==0) cout<<0<<endl;
    else cout<<b-a%b<<endl;
}