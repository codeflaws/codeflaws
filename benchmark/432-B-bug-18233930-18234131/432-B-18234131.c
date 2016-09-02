#include<stdio.h>

int x[1000010],y[100010],home[100010],away[100010];
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
