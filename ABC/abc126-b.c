#include<stdio.h>

int main(void)
{
    int s[4];
    
    scanf("%d",&s);
    
    if((s[0]*10+s[1]>12||s[0]*10+s[1]==0)&&(s[2]*10+s[3]>12||s[2]*10+s[3]==0))
    {
        printf("NA");
    }
    else if((s[0]*10+s[1]<=12&&s[0]*10+s[1]!=0)&&(s[2]*10+s[3]>12||s[2]*10+s[3]==0))
    {
        printf("MMYY");
    }
    else if((s[2]*10+s[3]<=12&&s[2]*10+s[3]!=0)&&(s[0]*10+s[1]>12||s[0]*10+s[1]==0))
    {
        printf("YYMM");
    }
    else
    {
        printf("AMBIGUOUS");
    }
    

    return 0;
}