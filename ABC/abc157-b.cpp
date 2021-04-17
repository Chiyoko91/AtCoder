#include<bits/stdc++.h>
using namespace std;

int main()
{
    int bingo[3][3],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>bingo[i][j];
        }
    }

    int n;
    cin>>n;
    int b;
    for(i=0;i<n;i++)
    {
        cin>>b;
        for(j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                if(b==bingo[j][k])
                {
                    bingo[j][k]=0;
                    break;
                }
            }
        }
        if((bingo[0][0]==bingo[0][1]&&bingo[0][0]==bingo[0][2])||(bingo[1][0]==bingo[1][1]&&bingo[1][0]==bingo[1][2])||(bingo[2][0]==bingo[2][1]&&bingo[2][0]==bingo[2][2])||(bingo[0][0]==bingo[1][0]&&bingo[0][0]==bingo[2][0])||(bingo[0][1]==bingo[1][1]&&bingo[0][1]==bingo[2][1])||(bingo[0][2]==bingo[1][2]&&bingo[0][2]==bingo[2][2])||(bingo[0][0]==bingo[1][1]&&bingo[0][0]==bingo[2][2])||(bingo[0][2]==bingo[1][1]&&bingo[0][2]==bingo[2][0]))
        {
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
}