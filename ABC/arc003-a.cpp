#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0;
    double gpa;
    char c;
    
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>c;
        if(c=='A') sum += 4;
        else if(c=='B') sum += 3;
        else if(c=='C') sum += 2;
        else if(c=='D') sum += 1;
    }

    gpa = (double)sum/n;
    cout<<fixed<<setprecision(14)<<gpa<<endl;
}