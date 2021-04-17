#include<stdio.h>
#include<math.h>

void int_search(int x[][],int n,int d);

int int_c=0;

int main(void)
{
    int N,D;
    scanf("%d %d",&N,&D);

    int i,j,X[N][D];
    for(i=0;i<N;i++)
    {
        for(j=0;j<D;j++)
        {
            sacnf("%d",&X[i][j]);
        }
    }
    int_search(X,N,D);
    printf("%d",int_c);
    return 0;
}

void int_search(int x[][],int n,int d)
{
    int i,j;

    for(i=0;i<n;i++)
    {
        for(j=0;j<d;j++)
        {
            if(sqrt(##))
            {
                int_c++;
            }            
        }
    }

}