#include<stdio.h>

int main(void)
{
int n,x,l[10000],i;

scanf("%d %d",&n,&x);

for(i=0;i<n;i++)
{
scanf("%d",&l[i]);
}
int d[n];
  int c=0;
d[0]=0;
  for(i=1;i<n;i++)
{
    d[i]=d[i-1]+l[i-1];
}


for(i=0;i<n;i++)
{
    if(d[i]<=x)
    {
        c++;
    }
}

printf("%d",c);
return 0;
}