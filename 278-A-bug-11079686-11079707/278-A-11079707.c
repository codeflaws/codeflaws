#include <stdio.h>

int main(int argc, char *argv[])
{
    int n,s,t,i,j,d1=0,d2=0;
    scanf("%d",&n);

    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);

    scanf("%d %d",&s,&t);

    if(s>t)
    {
        s=s+t;
        t=s-t;
        s=s-t;
    }
    for(i=s-1;i<t-1;i++) d1=d1+a[i];

    if(s==1)
    {
        for(j=t-1;j<n;j++)  d2=d2+a[j];
    }
    if(s!=1)
    {
        for(j=t-1;j<n;j++)  d2=d2+a[j];
        for(j=0;j<s-1;j++)  d2=d2+a[j];

    }

    if(d1>d2) printf("%d\n",d2);
    if(d1<d2) printf("%d\n",d1);
    if(d1==d2) printf("%d\n",d1);

    return 0;
}
