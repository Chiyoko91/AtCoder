#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a,b,city_group[n];

    for(int i=0;i<n;i++) city_group[i] = 0;
    
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;

        if(city_group[a] == 0 && city_group[b] == 0)
        {
            city_group[a-1] = i+1;
            city_group[b-1] = i+1;
        }
        else
        {
            int flg;
            if(city_group[a-1] == 0) 
            {
                city_group[a-1] = city_group[b-1];
            }
            else if(city_group[b-1] == 0)
            {
                city_group[b-1] = city_group[a-1];
            }
            else
            {
                flg = max(city_group[a-1],city_group[b-1]);

                for(int j=0;j<n;j++)
                {
                    if(city_group[j] == flg) city_group[j] = min(city_group[a-1],city_group[b-1]);
                }
            }
        }
    }

    int ans=0,hoge;
    for(int i=0;i<n;i++) if(city_group[i] == 0) ans++;
    for(int i=1;hoge == 1;i++)
    {
        int cnt = 0;
        hoge = i;

        for(int j=0;j<n;j++)
        {
            if(hoge == city_group[j])
            {
                cnt++;
                break;
            }
        }

        if(cnt != 0)
    }
}