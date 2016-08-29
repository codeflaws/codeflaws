#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int a[1001], b[1001];

int main(int argc, char *argv[])
{
    int n;
    scanf("%d", &n);
    int c[n+1];
    int p[n+1];
    c[0]=0;
    p[0]=0;
	int i;
    for(i=1; i<=n; i++){
		scanf("%d", &c[i]);
		scanf("%d", &p[i]);
	}
    int k;
	scanf("%d", &k);
    int t[k+1];
    t[0]=100000;
    for(i=1; i<=k; i++) scanf("%d", &t[i]);;
    int money=0, cnt=0;

    for(i=1; i<=n; i++)
    {
        int r=0;
		int j;
        for(j=1; j<=n; j++)
        {
            if(a[j]==0 && p[j]>p[r]) {r=j;}
        }

        int s=0;
        for(j=1; j<=k; j++)
        {
            if(b[j]==0 && t[j]>=c[r] && t[j]<t[s]) {s=j;}
        }
        if(s!=0)
        {
            a[r]=s;
            b[s]=r;
            cnt++;
            money+=p[r];
        }
        else a[r]=-1;
    }
    printf("%d %d\n", cnt, money);
    for(i=0; i<=n; i++)
    {
        if(a[i]>0)
            printf("%d %d\n", i, a[i]);
    }
    return 0;
}