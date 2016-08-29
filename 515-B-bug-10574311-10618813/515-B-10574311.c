#include <stdio.h>

int main(int argc, char *argv[])
{
    int n,m,b,g,i=0,x,j=0;
    scanf("%d%d",&n,&m);

    int B[100]={0},G[100]={0};

    scanf("%d",&b);
    for(i=0;i<b;i++){
        scanf("%d",&x);
        B[x]=1;
    }

    scanf("%d",&g);
    for(i=0;i<g;i++){
        scanf("%d",&x);
        G[x]=1;
    }

    for(i=0;i<m*n;i++){
        if(B[i%n]==0&&G[i%m]==1) B[i%n]=1;
        else if(B[i%n]==1&&G[i%m]==0) G[i%m]=1;
    }

    for(i=0;i<n&&B[i];i++);
    for(j=0;j<m&&G[j];j++);

    if(i==n&&j==m)printf("Yes");
    else printf("No");

    return 0;
}
