#include<bits/stdc++.h>
using namespace std;

main()
{
    int a,b;
    float sum=0;
    for(int i=0;i<3;i++)
    {
        cin>>a>>b;
        sum += a*b/10;
    }
    cout<<sum<<endl;
}