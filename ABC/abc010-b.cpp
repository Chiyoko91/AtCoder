#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,petal,ans = 0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>petal;
        while(petal%3 == 2 || petal%2 == 0)
        {
            if(petal%3 == 2)
            {
                ans++;
                petal--;   
            }

            if(petal%2 == 0)
            {
                ans++;
                petal--;
            }
        }
    }

    cout<<ans;
}