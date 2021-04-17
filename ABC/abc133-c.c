#include<stdio.h>

int mod_min=0;

int main(void)
{
    int L,R,i,j;
    scanf("%d %d",&L,&R);

    for(i=0;i<L;i++)
    {
        for(j=i+1;j<R;j++;)
        {
            if(mod_min>i*j%2019)
            {
                mod_min=i*j%2019;
            }
        }
    }
    printf("%d",mod_min);
}