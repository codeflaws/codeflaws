#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,m,i,j,r,a=1000;
    scanf("%d %d",&n,&m);
    int ara[m],temp,k;
    for(i=0;i<m;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<m-1;i++)
    {
        for(j=0;j<m-1;j++)
        {
            if(ara[j]>ara[j+1])
            {
               temp=ara[j];
               ara[j]=ara[j+1];
               ara[j+1]=temp;
            }
        }
    }
    k=m-n;
    for(i=0;i<=k;i++)
    {
       r=ara[i+3]-ara[i];
       if(r<a)
       {
           a=r;
       }
    }
    printf("%d",a);


return 0;
}
