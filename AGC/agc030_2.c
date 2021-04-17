#include<stdio.h>
#define DIM 60
int main(void)
{
  int l,n,i,j,now=0,walked_len=0;
  int tree_add[DIM];

  scanf("%d",&l);
  scanf("%d",&n);

for(i=0;i<n;i++)
{
  scanf("%d",&tree_add[i]);
}

for(j=0;j<n;j++)
{
  if((now-tree_add[j])*(now-tree_add[j])>=(tree_add[j]-now)*(tree_add[j]-now))
  {
    if(now-tree_add[j]<0)
    {
      walked_len -= now-tree_add[j];
    }
    else
    {
      walked_len += now-tree_add[j];
    }
  }
  else
  {
    if(tree_add[j]-now<0)
    {
      walked_len -= tree_add[j]-now;
    }
    else
    {
      walked_len += tree_add[j]-now;
    }
  }
  now = tree_add[j];
}

printf("%d\n",walked_len);
  return 0;
}
