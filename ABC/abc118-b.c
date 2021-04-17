#include<stdio.h>

int main(void)
{
  int n,m,i,j,res=0;

  scanf("%d %d",&n,&m);

int k[n],a[n][n],count[m];

  for(i=0;i<n;i++)
    {
      scanf("%d",&k[i]);
      for(j=0;j<k[i];j++)
        {
          scanf("%d",&a[i][j]);
          if(j!=0)
          {
            count[a[i][j]-1] += 1;
          }
          else
          {
            count[a[i][j]-1] = 1;
          }
        }
    }

    for(i=0;i<m;i++)
      {
        if(count[i]==n)
        {
          res += 1;
        }
      }

    printf("%d",res);

  return 0;
}
