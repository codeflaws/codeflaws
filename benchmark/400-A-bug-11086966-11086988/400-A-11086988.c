#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
   int i=1;
    char temp[12];
    char **a={0};
    int t=0;
    scanf("%d",&t);
    a=malloc(t*sizeof(char *));
    for(i=0;i<t;i++)
    {
        scanf("%s",temp);
        a[i]=strdup(temp);
    }

    int b[12];
    int h=0;
   for(h=0;h<t;h++)
   {
    for(i=0;i<12;i++)
    {
     if(a[h][i]=='X')
            b[i]=1;
     else
        b[i]=0;
    }
    /*for(i=0;i<12;i++)
    {
        printf("%d ",b[i]);
    }*/
    int c[6]={1,2,3,4,6,12};
    //printf("%d",c[1]);
    int j=0,k=0,count=0,flag=0;
    int d[6];
    for(j=0;j<6;j++)
    {
        flag=0;
        int x=12/c[j];
        //printf("\nJ IS %d x is %d",j,x);
        int sum=0;
        for(i=0;i<x;i++)
        {
            sum=0;
            for(k=0;k<c[j];k++)
            {
                int y=i+k*x;
                //printf("\ny is %d",y);
                sum=sum+b[y];
                //printf("\nsum is %d",sum);
            }
            if(sum==c[j])
        {
            //printf("\nsum=%d c[j]=%d",sum,c[j]);
            flag=1;
            break;
        }
        }
        if(flag==1)
        {
          count++;
        d[count]=c[j];
        //printf("\nc[j] is %d",c[j]);
        }


    }
    printf("%d",count);
    for(j=1;j<=count;j++)
    {
        printf(" %dx%d",d[j],12/d[j]);
    }
     printf("\n");
   }


    return 0;
}
