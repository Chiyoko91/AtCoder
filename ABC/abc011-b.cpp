#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    for(int i=0; i<(int) s.size(); i++)
    {
        char ch;
        ch = s[i];
        if(i == 0 && (int)ch >= 97 && (int)ch <= 122)
        {
            s[i] = s[i] - 32;
        }
        else if(i != 0 && (int)ch >= 65 && (int)ch <= 90)
        {
            s[i] = s[i] + 32; 
        }
    }
    cout<<s<<endl;   
}