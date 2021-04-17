#include<stdio.h>

int main(void)
{
    int N,monster=0;

    scanf("%d",&N);

    int A[N+1],B[N],i;

    for(i=0;i<N+1;i++)
    {
        scanf("%d",&A[i]);
    }

    for(i=0;i<N+1;i++)
    {
        scanf("%d",&B[i]);
    }
    int yusha_no=0,roop=0;
    
    while(1)
    {
        i=0;
        while(1)
        {
            if((A[i]<=0&&A[i+1]<=0)||B[yusha_no]==0)
            {
                break;
            }
            if(A[i]>0)
            {
                A[i]--;
                monster++;
                B[yusha_no]--;
            }
            if(A[i+1]>0&&A[i+1]!='\0')
            {
                A[i+1]--;
                monster++;
                B[yusha_no]--;
            }

        }
        yusha_no++;
        roop++;
        if(roop==N)
        break;
    }

    printf("%d",monster);
    return 0;
}