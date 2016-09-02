#include<stdio.h>
int a[1000000],last[1000000],table[1000000];
int main(int argc, char *argv[])
{
    int i,n,m,t;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    last[n] = 1;
    table[a[n]] = 1;
    for(i=n-1;i>0;i--)
    {
        if(table[a[i]]==0)
        {
            last[i] = last[i+1]+1;
            table[a[i]] = 1;
        }
        else last[i] = last[i+1];
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&t);
        printf("%d\n",last[t]);
    }
    scanf(" ");
return 0;
}
