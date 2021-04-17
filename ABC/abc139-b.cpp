#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    int a,b,num,tap=0;
    cin>>a>>b;
    while(1)
    {
        if(b==1)break;
        tap++;
        
        if(tap==1) num=a;
        else num+=a-1;

        if(num>=b)
        {
            break;
        }
    }
    cout<<tap;
}