#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,n,b,c,i,j,k,l;
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        if(a==1)
        {
        j=1;
        n=n/10;
        }
        else if(n%100==14)
         {
             j=1;
            n=n/100;
         }
         else if(n%1000==144)
         {
             j=1;
             n=n/1000;
         }
        else
        {printf("NO");
       return 0;
        }

    }
    if(j=1)
        printf("YES");
    return 0;
}
