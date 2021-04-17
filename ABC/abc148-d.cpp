#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans=0;

    cin>>n;

    int blocks[n];
    for(int i;i<n;i++)
    {
        cin>>blocks[i];
    }

    int target=1;

    for(int i=0;i<n;i++)
    {
        if(blocks[i]==target)
        {
            target++;
        }
        else
        {
            ans++;
        }
    }

    if(ans!=n) cout<<ans;
    else cout<<"-1";
}