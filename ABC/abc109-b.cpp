#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,judge=0;
    cin>>n;

    string w[n];
    for(int i;i<n;i++)
    {
        cin>>w[i];
        if(i!=0 && i!=n && w[i].begin!=w[i-1].end) judge++;
    }


}