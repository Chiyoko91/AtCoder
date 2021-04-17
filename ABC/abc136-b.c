#include<stdio.h>

int main(void)
{
    int n,i=1,keta=0;
  
    scanf("%d",&n);
  while(1)
  {
  	if(i<=9||(i>=100&&i<=999)||(i>=10000&&i<=99999))
      keta++;
    if(i==n)
      break;
    i++;
  }
  printf("%d",keta);
 return 0;
}