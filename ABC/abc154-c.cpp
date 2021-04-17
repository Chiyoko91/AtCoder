#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,count=0,judge=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(i>0)
        {
            for(j=n-1;j>i;j--)
            {
                if(a[i]==a[j])
                {
                    cout<<"NO";
                    return 0;
                }
            }
        }
    }
    cout<<"YES";
}