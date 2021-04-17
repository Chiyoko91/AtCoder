#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char c[n][n];
    int i,j;

    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<n;j++)
        {
            cin>>c[j][i];
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<c[i][j];
          	if(j%(n-1)==0&&j!=0) cout<<endl;
        }
    }
}