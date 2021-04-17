#include<bits/stdc++.h>
using namespace std;

struct Data
{
    string name="う笑";
    int vote=0;
};

int main()
{
    int n,i,j,flag,max_num=0;
    cin>>n;
    string hoge;
    Data s[50];
    
    for(i=0;i<n;i++)
    {
        cin>>hoge;
        for(j=0;j<n;j++)
        {
            if(s[j].name=="う笑")
            {
                s[j].name = hoge;
                s[j].vote++;
                
                if(s[j].vote>s[max_num].vote)
                {
                    max_num = j;
                }   
                
                break;
            }
            if(s[j].name.compare(hoge)==0)
            {
                s[j].vote++;
                
                if(s[j].vote>s[max_num].vote)
                {
                    max_num = j;
                }   
                
                break;
            }
        }
    }
    cout<<s[max_num].name<<endl;
}