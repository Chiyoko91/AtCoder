#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int price[n];

    for(int i=0; i<n; i++)
    {
        cin>>price[i];
    }

    sort(price, price + n);
    int i = n, max = price[n-1], ans;
    while(1)
    {
        i--;
        
        if(price[i] < max)
        {   
            ans = price[i];
            break;
        }
    }

    cout<< ans <<endl;
}