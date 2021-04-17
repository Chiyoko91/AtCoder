#include<stdio.h>
#define DIM 50

int main(void)
{
  int n,v[DIM],c[DIM],gap[DIM],i,max=0;

  scanf("%d",&n);

  for(i=0,i<n;i++)
  {
    scanf("%d",&v[i]);
  }

  for(i=0,i<n;i++)
  {
    scanf("%d",&c[i]);
  }

  for(i=0,i<n;i++)
  {
   gap[i] = v[i] - c[i];

   if(gap[i]<0)
   {
     gap[i]=0;
   }
   max += gap[i];
  }

  printf("%d",max);

  return 0;
}
