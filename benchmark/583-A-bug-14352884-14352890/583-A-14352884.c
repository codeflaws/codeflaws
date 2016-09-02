#include<stdio.h>
int main(int argc, char *argv[])
{   
    int bal[51]={0},mal[51]={0};
    int i,n,x,y;
    scanf("%d",&n);
    for (i=1;i<=n*n;i++)
    {
        scanf("%d%d",&x,&y);
        if (bal[x]==0 && mal[y]==0)
        {
            bal[x]=1;
            mal[x]=1;
            printf("%d ",i);
        }
    }
return 0;
}