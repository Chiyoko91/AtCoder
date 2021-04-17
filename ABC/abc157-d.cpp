#include<bits/stdc++.h>
using namespace std;
#define N 100000

struct people
{
    int group=0;//group number
    int fri=0;
    int blo=0;
};

int main()
{
    int n,m,k,a,b,i,j,member[N]={};
    cin>>n>>m>>k;
    people p[n];
    
    //friend
    for(i=0;i<m;i++)
    {
        cin>>a>>b;
        a--;
        b--;
        //group definition
        if(p[a].group==0&&p[b].group==0)
        {
            p[a].group=i+1;
            p[b].group=i+1;
        }
        else if(p[a].group!=0&&p[b].group==0)
        {
            p[b].group=p[a].group;
        }
        else if(p[a].group==0&&p[b].group!=0)
        {
            p[a].group=p[b].group;
        }
        else if(p[a].group!=0&&p[b].group!=0)
        {
            int hoge=(p[a].group>p[b].group ? p[a].group:p[b].group);
            for(j=0;j<n;j++)
            {
                if(hoge==p[j].group) p[j].group=(p[a].group<p[b].group ? p[a].group:p[b].group);
            }
        }
        //relation
        p[a].fri++;
        p[b].fri++;
    }
        
    //block
    for(i=0;i<k;i++)
    {
        cin>>a>>b;
        a--;
        b--;
        //relation
        if(p[a].group!=0&&p[b].group!=0&&p[a].group==p[b].group)
        {
            p[a].blo++;
            p[b].blo++;
        }
    }
    
    member[0]=1;
    for(i=0;i<n;i++)
    {
        if(p[i].group!=0) member[p[i].group]++;
    }

    for(i=0;i<n;i++)
    {
        cout<<member[p[i].group]-p[i].fri-p[i].blo-1<<" ";
    }
}