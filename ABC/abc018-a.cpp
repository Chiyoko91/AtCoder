#include<bits/stdc++.h>
using namespace std;

main()
{
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b&&a>c&&b>c) cout<<1<<endl<<2<<endl<<3<<endl;
    if(a>b&&a>c&&b<c) cout<<1<<endl<<3<<endl<<2<<endl;
    if(b>a&&b>c&&a>c) cout<<2<<endl<<1<<endl<<3<<endl;
    if(b>a&&b>c&&a<c) cout<<3<<endl<<1<<endl<<2<<endl;
    if(c>a&&c>b&&b<a) cout<<2<<endl<<3<<endl<<1<<endl;
    if(c>a&&c>b&&b>a) cout<<3<<endl<<2<<endl<<1<<endl;
}