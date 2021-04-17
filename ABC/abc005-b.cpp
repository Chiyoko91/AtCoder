#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,min=100,in;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>in;
        if(min>in) min=in;
    }
    cout<<min<<endl;
}