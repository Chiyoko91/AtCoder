#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int fans=0,sans=0;
    cin>>s;
    
    //0101...
    for(int i=0;i<s.length();i++)
    {
        if(i%2==0&&s[i]=='0') fans++;
        if(i%2!=0&&s[i]=='1') fans++;
    }
    //1010...
    for(int i=0;i<s.length();i++)
    {
        if(i%2==0&&s[i]=='1') sans++;
        if(i%2!=0&&s[i]=='0') sans++;
    }

    cout<<(fans<sans ? fans:sans)<<endl;
}