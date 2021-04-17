#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ans=0,check,width=4;
    string s,block;
    istringstream ss;
    cin>>s;

    for(int i=0;i<(int)s.length()-3;i++)
    {
        for(int j=0;j<(int)s.length()-width+1;j++)
        {
            //string->int
            block=s.substr(j,width);
            ss=istringstream(block);
            check=atoi(block.c_str());
            ss>>check;

            if(check%2019==0) ans++;
        }
        width++;
    }
    cout<<ans;
}