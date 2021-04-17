#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p_red=0, p_blue=0, ans;
    int a, b, c, d;
    cin>> a >> b;
    c = a;
    d = b;

    while(a != b) //red button
    {
        a++;
        p_red++;
        if(a == 10) a = 0;
    }

    while(c != d) //blue button
    {
        c--;
        p_blue++;
        if(c == -1) c = 9;
    }

    if(p_red > p_blue) ans = p_blue;
    else ans = p_red;

    cout<<ans<<endl;
}