#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int hh,mm,ss;
    hh = n / 3600;
    n -= hh * 3600;
    mm = n / 60;
    n -= mm * 60;
    ss = n;
    
    cout<<setw(2)<<setfill('0')<<hh<<":";
    cout<<setw(2)<<setfill('0')<<mm<<":";
    cout<<setw(2)<<setfill('0')<<ss<<endl;
}