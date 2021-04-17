#include<stdio.h>
#define N 20

int main(void)
{
int n,h[N],i,j,inn,high;

scanf("%d",&n);

for(i=0;i<n;i++)
{
  scanf("%d",&h[i]);
}


high = h[0];
inn = 1;

for(i=1;i<n;i++)
{
  if(high<=h[i])
  {
  high = h[i];
  inn += 1;
  }
}

printf("%d",inn);

  return 0;
}
