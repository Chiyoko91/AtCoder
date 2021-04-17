#include<stdio.h>

int main(void)
{
    int n,ch_count=0;
    scanf("%d",&n);

    int p[n],i;

    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
        if(p[i]!=i+1)
        {
            ch_count++;
        }
    }

    if(ch_count<=2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}