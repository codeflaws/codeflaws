#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,m,k,r[1000],c[1000],i,j,t,sum=0;
    scanf("%d %d %d",&n,&m,&k);
    for(i=0;i<n;i++)
    scanf("%d %d",&r[i],&c[i]);
    for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
    if(r[i]>r[j]) {t=r[i];r[i]=r[j];r[j]=t;t=c[i];c[i]=c[j];c[j]=t;}



    for(i=0;i<n;i++)
    {
        if(i==n-1) sum+=c[n-1];
        else
        {if(r[i]==r[i+1]);
         else sum+=c[i];}
    }
    if(sum>k)
    printf("%d",k);
    else
    printf("%d",sum);
return 0;
}
