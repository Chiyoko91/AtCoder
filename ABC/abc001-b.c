#include<stdio.h>

int main(void)
{
  double m;
  int vv;

  scanf("%lf",&m);

  m = m / 1000;

  if(m<0.1)
  {
  printf("00\n");
  }
  else if(m>=0.1&&m<1)
  {
    vv = m * 10;
    printf("0%d\n",vv);
  }
  else if(m>=1&&m<6)
  {
    vv = m * 10;
    printf("%d\n",vv);
  }
  else if(m>=6&&m<35)
  {
  vv = m + 50;
  printf("%d\n",vv);
  }
  else if(m>=35&&m<=70)
  {
    vv = (m - 30) / 5 + 80;
    printf("%d\n",vv);
  }
  else
  {
    printf("89\n");
  }

  return 0;
}
