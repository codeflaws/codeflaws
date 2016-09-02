#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,i,p,q,count=0;
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d %d",&p,&q);
            if(p<q) count++;
        }
        printf("%d\n",count);
    }
return 0;
}
