#include<stdio.h>
void swap(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
void check(int a[],int i,int *q)
{

    if(i%2==0)
        {
            if(a[i]<=a[i+1]||a[i]<=a[i-1])
            {*q=0;}
        }
    else 
        {
            if(a[i]>=a[i+1]||a[i]>=a[i-1])
            {*q=0;}
        }
}
int main(int argc, char *argv[])
{
    int i,iv=0,j,n,z[10],c,ans1=0,ans2=0,q,x;
    scanf("%d",&n);
    int a[150100];
    a[0]=500000;
    if((n+1)%2==0)
    a[n+1]=500000;
    else 
    a[n+1]=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            if(a[i]<=a[i+1]||a[i]<=a[i-1])
            {z[iv]=i;iv++;}
        }
        else 
        {
            if(a[i]>=a[i+1]||a[i]>=a[i-1])
            {z[iv]=i;iv++;}
        }
    }
    if(iv>6)
    printf("0");
    else
    {
        for(i=0;i<iv;i++)
        {
            for(j=1;j<=n;j++)
            {q=1;
                swap(&a[z[i]],&a[j]);
                check(a,j,&q);
                for(x=0;x<iv;x++)
                check(a,z[x],&q);
                if(q==1)
                {ans1++;}
               
            swap(&a[z[i]],&a[j]);
            }
        }
        for(i=0;i<iv;i++)
        {
            for(j=0;j<iv;j++)
            {q=1;
                swap(&a[z[i]],&a[z[j]]);
                for(x=0;x<iv;x++)
                check(a,z[x],&q);
                if(q==1)
                {ans2++;}
               
            swap(&a[z[i]],&a[z[j]]);
            }
        }
    printf("%d",ans1-(ans2/2));}
    return 0;
}