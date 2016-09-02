#include<stdio.h>

int x[100000],y[100000],home[100000],away[100000];
int main(int argc, char *argv[])
{
        int c,n,hm,aw;
        scanf("%d",&n);
        for(c=0;c<n;c++)
        {
                scanf("%d %d",&x[c],&y[c]);
                home[x[c]]++;
        }
        for(c=0;c<n;c++)
        {
                hm=n-1;
                hm+=home[y[c]];
                aw=2*(n-1)-hm;
                printf("%d %d\n",hm,aw);
        }
        return 0;
}
