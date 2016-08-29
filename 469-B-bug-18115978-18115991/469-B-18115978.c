#include <stdio.h>

int main(int argc, char *argv[])
{
    int p, q, l, r, i, a, b, c[51], d[51], t1[1001]={0}, ans=0, j, k;
    scanf("%d %d %d %d", &p, &q, &l, &r);
    for(i=0; i<p; i++)
    {
        scanf("%d %d", &a, &b);
        for(j=a; j<=b; j++)
            t1[j-1]=1;
    }
    for(i=0; i<q; i++)
        scanf("%d %d", &c[i], &d[i]);
    for(i=l; i<=r; i++)
    {
        int flag=0;
        for(j=0; j<q; j++)
        {
            for(k=c[j]+i; k<=d[j]+i; k++)
            {
                if(t1[k-1]==1)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                ans++;
                break;
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}