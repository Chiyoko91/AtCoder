#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n;
    cin>>n;
    long long int tri[n];
    tri[0] = 0;
    tri[1] = 0;
    tri[2] = 1;

    for(i=3;i<n;i++) tri[i] = (tri[i-1] + tri[i-2] + tri[i-3]) % 10007;
    
    cout<<tri[n-1]<<endl;
}