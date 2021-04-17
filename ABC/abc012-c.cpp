#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, kuku[9][9] = {}, sum = 0;
    cin>>n;

    for(int i = 1; i <= 9; i++)
    {
        for(int j = 1; j <= 9; j++)
        {
            kuku[i-1][j-1] = i * j;
            sum += kuku[i-1][j-1];
        }
    }
    
    int ans = sum - n;

    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            if(kuku[i][j] == ans) cout<< i+1 << " x " << j+1 << endl;
        }
    }
}