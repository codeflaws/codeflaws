#include<stdio.h>
int main(int argc, char *argv[])
{
    int p,n,a[310],i,x;

    scanf("%d %d",&p,&n);
    for(i=0;i<n;i++) a[i]=0;

    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        a[x%p]++;
        if(a[x%p]>1)
        {
            printf("%d",i+1); return 0;

        }

    }
    printf("-1"); return 0;

}
