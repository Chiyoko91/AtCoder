#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,k;
    cin>>n>>a>>b>>k;
    int p[k];
    for(int i=0;i<k;i++) cin>>p[i];

    for(int i=0;i<k;i++)
    {
        for(int j=0;j<k;j++)
        {
            if((p[i]==p[j]&&i!=j)||p[i]==a||p[i]==b)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
}