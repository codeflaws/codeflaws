#include<stdio.h>
int main(int argc, char *argv[])
{
    long long x,i,count=0,p,j,k,a;
    scanf("%lld",&x);
    p=x;
    for(;p!=0;p=p/10)
    {
       count++;
    }
    printf("%d\n",count);
    int digit[count];
    for(j=count;j>0;j--)
    {
        digit[j-1]=x%10;
        x=x/10;
    }
    for(k=0;k<count;k++)
    {
       if(digit[k]>4)
       {
           if(k==0 && 9-digit[k]==0)
           {
               digit[k]=digit[k];
           }
           else
           {
               digit[k]=9-digit[k];
           }
       }
    }
    for(k=0;k<count;k++)
    {
        printf("%d", digit[k]);
    }
return 0;
}
