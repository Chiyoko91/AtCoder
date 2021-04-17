#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  int i=0;
  cin>>s;
  while(i<s.size())
  {
    if(s[i]!='a'&&s[i]!='i'&&s[i]!='u'&&s[i]!='e'&&s[i]!='o') cout<<s[i];
    i++;
  }
  cout<<"\n";
}