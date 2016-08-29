#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int i,j,temp,k,n,d,l,min=9999,is_neg;
    scanf("%d%d%d",&n,&d,&l);
    int *a=(int*)malloc(sizeof(int)*n);
    a[0]=d;
    for(i=0;i<n-2;i++)
    {
        min=9999;
        for(j=1;j<=l;j++)
        {
          temp=j-a[i];
          if(temp<0)
          {
              if(min>(-1*temp))
              {
                  min=-1*temp;
                  k=j;
                  is_neg=-1;
              }
          }
          else
          {
              if(min>temp)
              {
                  min=temp;
                  k=j;
                  is_neg=1;
              }
          }
        }
        a[i]=k;
        a[i+1]=is_neg*min;
    }

     //now for the last part
     a[n-1]=0;
     for(j=1;j<=l;j++)
     {
         temp=j-a[i];
         if(temp>=1 && temp<=l)
         {
             a[i+1]=temp;
             break;
         }
     }

    if(a[n-1]>=1&& a[n-1]<=l)
    {
        for(i=0;i<n-1;i++)
        printf("%d ",a[i]);
        printf("%d\n",a[i]);
    }
    else
    printf("-1\n");
    return(0);
}
