#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,w;
    cin>>h>>w;
    int a,b;
    cin>>a>>b;
    cout<<h*w-(h*b+w*a-a*b);
}