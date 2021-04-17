#include<stdio.h>
#include<math.h>

int main(void)
{
    int n,k,i,j,a;
    double win=0;
    scanf("%d %d",&n,&k);

    for(i=1;i<=n;i++)
    {
        a=i;
        while(1)
        {
            if(a>=10)
            {
                break;
            }
            j++;
            a*=2;
        }
        win += pow(0.5,(double)j) /3;
    }

printf("%lf",win);
    return 0;
}