#include<stdio.h>

int main(void)
{
int a,b,i,sum=0;

scanf("%d",&a);
scanf("%d",&b);

for(i=0;i<2;i++)
{
  if(a<b)
  {
  sum += b;
  b -= 1;
  }
  else
  {
    sum += a;
    a -= 1;
  }
}

printf("%d",sum);

  return 0;
}
