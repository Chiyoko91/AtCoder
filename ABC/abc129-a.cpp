#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    int p,q,r;
    cin>>p;
    cin>>q;
    cin>>r;
    if(p+q>=p+r&&p+r<=q+r)
    {
        cout<<p+r;
    }
    else if(p+r>=p+q&&p+q<=q+r)
    {
        cout<<p+q;
    }
    else
    {
        cout<<q+r;
    }
}