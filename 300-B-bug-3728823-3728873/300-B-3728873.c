# include <stdio.h>
int main(int argc, char *argv[])
{
    int n,m,x,y,i,j,k;
    scanf("%d %d",&n,&m);
    int a[49]={0},t=1,tm[17]={0};
    while(m--)
    {
        scanf("%d %d",&x,&y);
        if(a[x]==a[y] && a[x]==0){a[x]=t;a[y]=t;tm[t++]=2;}
        else if(a[x]!=a[y] && a[x]!=0 && a[y]!=0){printf("-1");return 0;}
        else if(a[x]!=a[y] && (a[x]==0 || a[y]==0)){if(a[x]==0)a[x]=a[y];else a[y]=a[x];tm[a[x]]++;}
        if(t>n/3+1){printf("-1");return 0;}
    }
    for(i=1;i<=n/3;i++)if(tm[i]>3){printf("-1");return 0;}
    for(i=1;i<=n/3;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[j]==i){printf("%d ",j);}
        }
        for(k=1;k<=n && tm[i]<3;k++)if(a[k]==0){a[k]=-1;printf("%d ",k);tm[i]++;}
        printf("\n");
    }
    return 0;

}
