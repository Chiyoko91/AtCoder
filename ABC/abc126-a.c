#include<stdio.h>

int main(void)
{
    int n,k;
    char s[n];

    scanf("%d %d",&n,&k);
    scanf("%s",s);

    if(s[k-1]=='A')
    {
        s[k-1]='a';
    }
    else if(s[k-1]=='B')
    {
        s[k-1]='b';
    }
    else
    {
        s[k-1]='c';
    }
    
    printf("%s",s);
    return 0;
}