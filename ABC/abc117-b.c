#include<stdio.h>

int main(void)
{
  int n,l[101],i,lmax=0,lsum=0;

  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
    scanf("%d",&l[i]);

    if(lmax<l[i])
    {
      lmax = l[i];
    }

    lsum += l[i];
  }

  if(lmax<lsum-lmax)
  {
  printf("Yes");
  }
  else
  {
  printf("No");
  }

  return 0;
}
