# include <stdio.h>
int main(int argc, char *argv[])
{
int n,m,i,t=0,x,y;
scanf("%d %d",&n,&m);
int a[100001]={0};
for(i=0;i<m;i++)
{
    scanf("%d %d",&x,&y);
    a[x]++;a[y]++;
}
if(m==n){for(i=1;i<=n;i++)
            {if(a[i]!=2){printf("unknown topology");return 0;}}
            printf("ring topology");return 0;}

if(m==(n-1))
{
    for(i=1;i<=n;i++)
    {
        if(a[i]!=1 && a[i]!=n-1){t=0;break;}
        if(a[i]==n-1)t++;
    }
    if(t==1){printf("star topology");return 0;}


    for(i=1;i<=n;i++)
    {
        if(a[i]!=2 && a[i]!=1){printf("unknown topology");printf("%d",i);return 0;}
        if(a[i]==1)t++;
    }
    if(t==2){printf("bus topology");return 0;}
    else {printf("unknown topology");return 0;}

}
printf("unknown topology");return 0;

}
