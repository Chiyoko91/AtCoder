#include<bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    int i,j,data[4][4];

    for(i=3;i>=0;i--)
    {
        for(j=3;j>=0;j--)
        {
            cin>>c;
            if(c=='.')
            {
                data[i][j]=0;
            }
            else if(c=='o')
            {
                data[i][j]=1;
            }
            else
            {
                data[i][j]=2;
            }
        }
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(data[i][j]==0)
            {
                cout<<". ";
            }
            else if(data[i][j]==1)
            {
                cout<<"o ";
            }
            else
            {
                cout<<"x ";
            }
            if(j%3==0&&j!=0) cout<<"\n";
        }
    }
}