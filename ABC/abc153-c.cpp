#include<bits/stdc++.h>
using namespace std;

void quick(long int a[],int left,int right);
void swap(long int x,long int y);

int main()
{
    int n,k,i;
    long int ans=0;
    cin>>n>>k;
    
    long int h[n]={};//monsters hp
    for(i=0;i<n;i++)
    {
        cin>>h[i];
    }

    quick(h,0,n-1);
    
    for(i=n-k-1;i>=0;i--)
    {
        ans+=h[i];
    }

    cout<<ans<<endl;
}


void quick(long int a[],int left,int right)
{
  int pl=left,pr=right,pivot=a[(pl+pr)/2]; 

  do{
        while(a[pl]<pivot)
        {
	        pl++;
	    }
        
        while(a[pr]>pivot)
	    {
	        pr--; 
	    }
      
        if(pl<=pr)
	    {
	        swap(a[pl],a[pr]);
	        pl++;
	        pr--;
	    }
    }while(pl<=pr);

  if(left<pr)
    {
	    quick(a,left,pr);	
    }
  
  if(pl<right)
    {
        quick(a,pl,right);
    }
}


void swap(long int x,long int y)
{
  long int tmp=x;
  x = y;
  y = tmp;
}
