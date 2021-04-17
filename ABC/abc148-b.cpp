#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char str1[n],str2[n];
    cin>>str1>>str2;

    for(int i=0;i<n;i++)
    {
        cout<<str1[i]<<str2[i];
    }
}