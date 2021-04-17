#include<stdio.h>
#define DIM 8

int main(void)
{
  int h,w,i,j,s_count=0;
  char s[DIM];

  scanf("%d %d",&h,&w);

  for(i=0;i<h;i++)
  {
    scanf("%s",s);
    for(j=0;j<w;j++)
    {
      if(s[j]=='#')
      {
        s_count++;
      }
    }
  }

  if(s_count==h+w-1)
  {
    printf("Possible\n");
  }
  else
  {
    printf("Impossible\n");
  }
  return 0;
}
