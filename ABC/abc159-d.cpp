#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    int k[n];
    vector<int> hoge(n,0),ans(n,0);

    for(i=0;i<n;i++)
    {
        cin>>k[i];
        hoge[k[i]]++;
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            ans[j]+=hoge[i];
        }
    }

    for(i=0;i<n;i++)
    {
        cout<<ans[k[i]]-1<<endl;
    }
}